#include<stdio.h>
int gcd(int a,int b);
void main()
{
    int g,num1,num2;
    printf("\nEnter two numbers:");
    scanf("%d %d",&num1,&num2);
    if(num1<num2)
        num1=num1+num2;
        num1=num1-num2;
        num2=num1-num2;
    g=gcd(num1,num2);
    printf("The gcd is:%d",g);
}
int gcd(int a,int b)
{
    if(b%a==0)
        return (a);
    else
        return gcd(b%a,a);
}
