#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 10
int stack_arr[MAX];
int top=-1;
void push();
int pop();
int peek();
void display();
int main()
{
    int item,choice;
    while(1)
    {
        printf("1.Push");
        printf ("\n2.Pop ");
        printf ("\n3.Display the top element");
        printf ("\n4.Display all elemnts");
        printf ("\n5. press 5 to exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                    printf("\nEnter the value to be pushed:");
                    scanf("%d",&item);
                    push(item);
                    break;
            case 2: item=pop();
                    printf("\nThe popped element is: %d",item);
                    break;
            case 3: printf("\nThe top element is:%d",peek());
                    break;
            case 4: display();
                    break;
            case 5: exit(1);
            default: printf("\nWrong choice");

        } //end of switch

    }//end of while
}//end  of main
void push(int item)
{
    if (top==MAX-1)
    {
        printf ("\nStack Overflow");
        exit(1);
    }
    else
    {
        top++;
        stack_arr[top]=item;
    }
}
int pop()
{   int item;
    if(top==-1)
    {
        printf("\nStack Underflow");
        exit (1);
    }
    else
        item=stack_arr[top];
        top--;
        return item;
}
int peek()
{
    if(top==-1)
    {
        printf("\nStack Underflow");
        exit (1);
    }
    else
        return stack_arr[top];
}
void display()
{
    int i;
    if (top==-1)
    {
        printf("\nStack underflow");
        exit (1);
    }
    else
    {
        printf ("\n Stack elements are:\n");
        for (i=top;i>=0;i--)
            printf("%d\n",stack_arr[i]);
    }
}

