#include <stdio.h>
void insert(int data, int n)
 {
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	  temp->data = data;
	  temp->next = NULL;
	  if(n==1) {
		temp->next = head;
		head = temp;
		return;
	 }
Node *temp1 = head;  //(struct Node*)malloc(sizeof(struct Node));
	for(int i=0;i<n-2;i++)  {
	        temp1 = temp1->next;
  }
	 temp->next = temp1->next;
	 temp1->next = temp;
}

