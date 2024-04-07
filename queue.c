#include<stdio.h>
#include<stdbool.h>
#define CAPACITY 5

int myqueue[CAPACITY];
int front = 0, rear = -1, totalitem = 0;

bool ifFull()
{
    if(totalitem == CAPACITY)
    {
        return true;
    }
    return false;
}

bool isEmpty()
{
    if(totalitem == 0)
    {
        return true;
    }
    return false;
}

void enqueue(int item)
{
    if(ifFull())
    {
        printf("Sorry queue is full.\n");
        return;
    }
    rear = (rear + 1) % CAPACITY;
    myqueue[rear] = item;
    totalitem++;

}

int dequeue()
{
    if(isEmpty())
    {
        printf("Sorry the queue is empty.\n");
        return -1;
    }
    int frontitem = myqueue[front];
    myqueue[front] = -1;
    front = (front + 1) % CAPACITY;
    totalitem--;
    return frontitem;
}
void printqueue()
{
    int i;
    printf("Queue: ");
    for(i = 0; i < CAPACITY; i++)
    {
        printf("%d ", myqueue[i]);
    }
    printf("\n");
}

int main()
{
    printf("Implementing the queue\n");
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    printqueue();
    dequeue();
    printqueue();
    enqueue(60);
    printqueue();
    return 0;
}
