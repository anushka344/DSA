#include<stdio.h>
int summation(int n);
void main()
{
    int num;
    printf("\nEnter number:");
    scanf("%d",&num);
    printf("\b\b=%d\n",summation(num));
}
int summation(int n)
{
    if (n==0)
        return (0);
    else
         printf("%d + ",n);

        return (n+summation(n-1));
}

