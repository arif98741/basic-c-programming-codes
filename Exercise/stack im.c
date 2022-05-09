#include <stdio.h>
struct Node
{
    int x;
    struct Node *q;
    struct Node *p;

};
typedef struct Node node;
int main()
{

    node *head;
    head = (node*)malloc(sizeof(node));
    head->x =10;
    head->p =(node*)malloc(sizeof(node));
    head->p->x=9; head->p->p=NULL; head->p->q=NULL;
    head->q=(node*)malloc(sizeof(node));
    head->q->x=12; head->q->p=NULL; head->q->q=NULL;
    printf("%d %d %d",head->x,head->p->x,head->q->x);
    return 0;
}
