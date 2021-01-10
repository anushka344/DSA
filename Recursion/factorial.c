#include<stdio.h>
long int fact(int n);
void main()
{
    int num;
    printf("\nEnter number:");
    scanf("%d",&num);
    if(num<0)
        printf("No factprial of negative number");
    else
        printf("The factorial of %d is %d",num,fact(num));
}
long int fact(int n)
{
    if (n==0)
        return (1);
    else
        return (n*fact(n-1));
}
