#include<stdio.h>
void main()
{
    int n,arr[50],num,i,first,middle,last,index,flag=0;
    printf ("\nEnter the Size:");
    scanf("%d",&n);
    printf("Input the values in ascending order");
    for(i=0;i<n;i++)
    {
        printf("\nEnter the element:");
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the element to be searched:");
    scanf("%d",&num);
    //binary search logic
    first=0;
    last=n-1;
    while(first<=last)
    {
        middle=(first+last)/2;
        if(arr[middle]==num)
        {
            flag=1;
            break;
        }
        else if (arr[middle]>num)
        {
            last=middle-1;
        }
        else
        {
            first=middle+1;
        }
    }
    if (flag==0)
        printf("\nElement %d not present",num);
    else
        printf("\n%d element is found in index: %d",num,middle);

}
