#include<stdio.h>
void main(){


    int number, prime, i;


    printf("enter your numbr");
    scanf("%d",&number);
    if(number == 1)
    {
printf("This is not prime no.");

    }
    else if (number==2)
    {

        printf("This is prime no.");
    }

    for(i=2; i< number; i++)

    if (number % i == 0)
    {
        printf("This is not prime number ");
        break;
    }


    else{
        printf("This is prime ");
        break;
    }
}