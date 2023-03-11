#include<stdio.h>
void main(){
    int year;
    printf("enter the year leap or non leap year");
    scanf("%d",&year);

    if (year%4==0||(year%400==0)&&(year%100==0));
    {

        printf("leap year");

    }
    
{


        printf("non leap year");
    }
}