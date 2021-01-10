#include<stdio.h>
float power(int n,float p);
void main()
{
    int num;
    float p,pows;
    printf("\nEnter number:");
    scanf("%d",&num);
    printf("\nEnter power:");
    scanf("%f",&p);
    pows=power(num,p);
    printf("The exponential  of %d to power %f is %f",num,p,pows);
}
float power(int n,float p)
{
    if(p==0)
        return(1);
    else
        return (n*power(n,p));
}
