#include<stdlib.h>
#include<stdio.h>

struct Node
{
   int data;
   struct Node* next;
};

struct Node *head;

void Insert(int data, int n)
{
   Node* temp1 = new Node();
   temp1->data = data;
   temp1->next = NULL;
   if (n == 1){
    temp1->next = head;
    head = temp1;
    return;
   }
   Node* temp2 = new Node();
   for (int i = 0; i < n-2; i++){
    temp2 = temp2->next;
   }
   temp1->next = temp2->next;
   temp2->next = temp2;
}
void print()
{
    Node* temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    head = NULL;
    Insert(7,1);
    Insert(5,2);
    Insert(8,1);
    Insert(6,2);
    print();
system("pause");
}
