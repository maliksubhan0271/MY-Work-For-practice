#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10,b=20;
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("a= %d",a);
    printf(" b= %d",b);
}