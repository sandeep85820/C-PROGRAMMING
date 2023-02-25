#include<stdio.h>
void main (){
int b, sum=0;
printf("Enter the number\n");
scanf("%d",&b);

int v= b;
for(int i=0; b!=0; i++) 
{
i= b%10;
b=b/10;
sum=(sum*10)+1;



}if(sum==v)
{

    printf("This is palindrome");
}
else{


    printf("This is not palindrome");
    
}










}