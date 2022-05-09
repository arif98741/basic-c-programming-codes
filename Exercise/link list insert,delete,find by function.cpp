#include <stdio.h>
#include <stdlib.h>
struct Node
{
 int data;
 struct Node *next;
};
struct Node *head;

void insert(int data, int n)
{
 struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
 temp->data = data;
 temp->next = NULL;
 if(n==1)
 {
 temp->next = head;
 head = temp;
 return;
 }

 struct Node *temp1 = head;
 //(struct Node*)malloc(sizeof(struct Node));
 for(int i=0; i<n-2; i++)
 {
 temp1 = temp1->next;
 }
 temp->next = temp1->next;
 temp1->next = temp;
}

 void print()
 {
 struct Node* temp = head;
 printf("The values inside the linked list are: \n");
 while (temp!=NULL)
 {
 printf("%d ",temp->data);
 temp = temp->next;
 }
 printf("\n");
 }

int main()
{
 head = NULL;
 insert(2,1);
 insert(3,2);
 print();
}
