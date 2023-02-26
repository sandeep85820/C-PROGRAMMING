#include<stdio.h>
void main(){

int age;
int vipass=0;

printf("Enter your age\n");
scanf("%d",&age);
if((age<=70 && age>=18)||(vipass==1))

{

    printf("you are above 18 and below 70, you can drive");

}
else{
    printf("you can not  drive");

}

}