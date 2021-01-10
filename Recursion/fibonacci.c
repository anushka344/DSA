#include<stdio.h>
int fib(int n);
void main()
{
    int terms,i;
    printf("Enter number of terms:");
    scanf("%d",&terms);
    for(i=0;i<terms;i++)
        printf("%d ",fib(i));
    printf("\n");
}
int fib(int n)
{
    if(n==0 || n==1)
        return(1);
    else
        return (fib(n-1)+fib(n-2));
}

