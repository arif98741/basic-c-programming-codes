#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node
{
 int data;
 struct Node* next;
};
 struct Node* head; //Global variable
 void insert (int x)
 {
 struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
 temp->data= x;
 temp->next=head;
 head = temp;
 }
 void Print()
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
 head = NULL; //Empty list
 printf("How many numbers ? \n");
 int n, i, x;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&x);
 insert(x);
 Print();
 }
 return 0;
 }
