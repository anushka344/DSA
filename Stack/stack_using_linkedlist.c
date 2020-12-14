#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *link;
}*top=NULL;
void push(int item);
void pop();
void peek();
void display();
main()
{
    int item,choice;
    while(1)
    {
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Peek");
        printf("\n4.Display");
        printf("\nEnter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\nEnter the element to be pushed:");
            scanf("%d",&item);
            push(item);
            break;
        case 2:
            pop();
            break;
        case 3:
                peek();
                break;
        case 4:
                 display();
                 break;
        case 5:
                  exit(1);
        default:printf("\nWrong choice");


        }
    }

}

void push(int item)
{
    struct node *tmp;
    tmp=(struct node *)malloc(sizeof(struct node));
    if(tmp==NULL)
    {
        printf("\nStack overflow");
        exit(1);
    }
    tmp->info=item;
    tmp->link=top;
    top=tmp;
}
void pop()
{
    struct node *tmp;
    int item;
    if (top==NULL)
    {
        printf("\nStack Underflow");
        exit(1);
    }
    tmp=top;
    item=top->info;
    top=top->link;
    free(tmp);
    printf("\nThe elemement popped is: %d",item);
}
void peek()
{
    if (top==NULL)
    {
        printf("\nStack Underflow");
        exit(1) ;
    }
    printf ("\nThe top element is:%d",top->info);
}
void display()
{
    struct node *q;
    q=top;
     if (top==NULL)
    {
        printf("\nStack Underflow");
        exit(1) ;
    }
    printf("\nThe elements are:\n");
    while(q!=NULL)
    {
        printf("%d ",q->info);
        q=q->link;
    }
    printf("\n");


}
