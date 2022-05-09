#include <stdio.h>

struct Node
{

    int data;
    struct Node *next;

};
struct Node *head;
void insert1(int data,int n)
{

    struct Node *temp = (struct Node*)malloc(sizeof(struct Node))
    temp->data= data;
    temp->next = NULL;
    if(n==1){
        temp->next =head;
        head = temp;
        return;
    }
}
sturct Node *temp1 = head;
for(int i=0; i<n-2); i++{
    temp1= temp1->temp;
    }
    temp->next=temp1->next;
    temp1->next->temp;
    int search1(int num)
    {

        int flag =0;
        struct Node *Node;
        temp= head;
        while(temp!=NULL){
            printf("%d",temp1->data);
            temp1=temp->next;
        }

        }
    }
