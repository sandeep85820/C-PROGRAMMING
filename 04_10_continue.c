#include<stdio.h>
void main(){

int skip=5, i=0;
while(i<10){

    i++;
    if(i!=skip){

        continue;


    } 
    else{
        printf("%d\n",i);
    }
}


}