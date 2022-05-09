#include<stdio.h>
#include<stdlib.h>
int i=0;
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
 for(i=0;i<n-2;i++)
 {
 temp1 = temp1->next;
 }
 temp->next = temp1->next;
 temp1->next = temp;
}

int search(int num)
{
int flag = 0;
struct Node *temp;
temp = head;
 while(temp!=NULL)
 {
 if(temp->data == num)
 return(1); //Found
 temp = temp->next;
 }
if(flag == 0)
 return(0); // Not found
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

