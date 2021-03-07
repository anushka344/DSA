#include<stdio.h>
#include<stdlib.h>
void swap(int *x,int *y)
{

    int temp=*x;
    *x=*y;
    *y=temp;
}
void selectionsort(int a[],int n)
{
    int i,j,k;
    for (i=0;i<n-1;i++)
    {
        for(k=j=i;j<n;j++)
        {
            if (a[j]<a[k])
                k=j;
        }
        swap(&a[i],&a[k]);
    }

}
int main(){
int i,n,a[100];
int l,h;
printf("Enter size:");
scanf("%d",&n);
 printf("\nEnter the element:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
selectionsort(a,n);
printf("\nThe sorted list is:");
for (i=0;i<n;i++)
    printf("%d ",a[i]);
}

