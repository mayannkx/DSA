#include <stdio.h>
#define MAX1 10
#define MAX2 10
int stack1[MAX1];
int stack2[MAX2];
int top1 = -1,top2 = -1;

void push(int arr[],int x)
{
    if(top1 == MAX1-1 || top2 == MAX2 -1)
        printf("stack overflow..");
    else
    {
        top1++;
        arr[top] = x;
    }
}

int pop(int arr[])
{
    int x =-1;
    if(top == -1)
        printf("Stack underflow..");
    else
    {
        x = arr[top];
        top--;
        return x;
    }
}
void display(int arr[])
{
    if(top == -1)
        printf("stack is empty..");
    else
    {
        int i;
        printf("\nStack is as follow..\n");
        for(top=i;i>-1;i--)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
}

int main ()
{

    push(stack1,10);
    push(stack1,12);
    push(stack1,14);
    display(stack1);

    int x;
    x = pop(stack1);
    printf("pop element is:- %d\n",x);
    display(stack1);

    return 0;
}
