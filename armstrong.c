#include<stdio.h>
#include<math.h>

void main(){

    int n, x, sum=0, temp, i=0, loc, y;


    printf("enter any number:");
    scanf("%d",&n);
    temp=n;
    loc=n;
    while(n>0)

    {

        x=n%10;
        n=n/10;
        i++;
    }
    while(loc>0)
    {
        y=loc%10;
        sum=sum+pow(y,i);
        loc=loc/10;


    }
    if(temp==sum)
    {
        printf("your number is armstrong");
    }
    else{
        printf("your number is not armstrong");
    }

}
