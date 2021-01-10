#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 10
int queue_arr[MAX];
int front=-1;
int rear=-1;
void insert();
int delete();
int peek();
void display();
int main()
{
    int item,choice;
    while(1)
    {
        printf("1.Insert");
        printf ("\n2.Delete ");
        printf ("\n3.Display the front element");
        printf ("\n4.Display all elements");
        printf ("\n5. press 5 to exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                    printf("\nEnter the value to be pushed:");
                    scanf("%d",&item);
                    insert(item);
                    break;
            case 2: item=delete();
                    printf("\nThe deleted element is: %d",item);
                    break;
            case 3: printf("\nThe front element is:%d",peek());
                    break;
            case 4: display();
                    break;
            case 5: exit(1);
            default: printf("\nWrong choice");

        } //end of switch

    }//end of while
}//end  of main
void insert(int item)
{
    if(rear==MAX-1)
    {
        printf("\nQueue Overflow");
        exit(1);
    }
    if(front==-1)
        front++;
    rear++;
    queue_arr[rear]=item;
}
int delete()
{
    int item;
    if(front==-1 || front==rear+1)
    {
        printf("\nQueue Underflow");
        exit(1);
    }
    item=queue_arr[front];
    front=front+1;
    return item;
}
int peek()
{
    if(front==-1 || front==rear+1)
    {
        printf("\nQueue Underflow");
        exit(1);
    }
    return queue_arr[front];
}
void display()
{
    int i;
    if(front==-1 || front==rear+1)
    {
        printf("\nQueue Underflow");
        exit(1);
    }
    printf("\nQueue elements are:");
    for(i=front;i<=rear;i++)
    {
        printf("%d ",queue_arr[i]);
    }
    printf("\n");
}
