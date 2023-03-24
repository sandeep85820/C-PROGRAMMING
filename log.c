#include <stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    float a=2, b=4, g=6 ,h=7;
    scanf("%f %f %f %f " ,&a ,&b ,&g , &h);
    float t=sin(a)  * cos(b)  -  abs(g-h) + sqrt(a*b);
    printf("%f", t);


 
}