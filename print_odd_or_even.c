#include<stdio.h>
void main(){


    int i;
    printf("Enter a number\n");
    scanf("%d",&i);
    if(i%2==0)
    {
        printf("the number %d is even",i);

    }
    else{

        printf("the number %d is odd",i);
    }
    printf("\n");
}