#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;
int main()
{
    node *a = NULL;
    node *b = NULL;
    node *c = NULL;
    a = (struct node*)malloc(sizeof(struct node));
    b = (struct node*)malloc(sizeof(struct node));
    c = (struct node*)malloc(sizeof(struct node));
    a->data = 10;
    b->data = 20;
    c->data = 30;
    a->next = b;
    b->next = c;
    c->next = NULL;
    while(a != NULL)
    {
        printf("%d ", a->data);
        a = a->next;
    }
    return 0;
}
