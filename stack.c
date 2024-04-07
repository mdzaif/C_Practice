#include<stdio.h>
#define CAPACITY 3

int stack[CAPACITY];
int top = -1;
void push(int x)
{
    if(top  < CAPACITY - 1)
    {
    top = top + 1;
    stack[top] = x;
    printf("Item added succesfully: %d\n", x);
    }
    else
    {
        printf("Exception! No spaces\n");
    }
}

int pop()
{
    if(top >= 0)
    {
        int val = stack[top];//store the pop item to see which item is removed.
        top = top - 1;
        return val;
    }
    printf("Exception from pop! Empty stack");
    return -1;
}
int peek()
{
    if(top >= 0)
    {
        return stack[top];
    }
    printf("Exception from Peek! Empty stack\n");
    return -1;
}
int main()
{
    printf("Implementing my stack in C.\n");
    push(10);
    push(20);
    push(30);
    printf("item pop: %d\n", pop());
    push(40);
    printf("Top of stack: %d\n", peek());
    printf("item pop: %d\n", pop());
    push(50);
    printf("Top of stack: %d\n", peek());
    push(60);
    return 0;
}
