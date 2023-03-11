#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){

int number , guess , nguesses=1;
srand(time(0));
number=rand()%100+1;
printf("The number is %d",number);


do{

    printf("Guess the number between 1to 100");
    scanf("%d",&guess);
    if(guess>number){
        printf("Lower number please!\n");
    }
    else if (guess>number){
        printf("Higher number please!\n");
    }
    else{
        printf("You guessed it in %d attempts\n", nguesses);
    }
    nguesses++;

}while(guess!=number);




}