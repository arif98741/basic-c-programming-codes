#include <iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
 int data;
 Node* next;
};
Node* head;
void Insert(int data)
{

 Node* temp1 = new Node;
 temp1->data = data;
 temp1->next = head;
 head = temp1;
}
void Print()
{
 Node* temp1 = head;
 while(temp1 != NULL)
 {
 cout << " " << temp1->data;
 temp1 = temp1->next;
 }
 cout << endl;
}
void Delete(int n)
{
 Node* temp1 = head;
 if(n == 1)
 {
 head = temp1->next;
 free(temp1);
 return;
 }
 for(int i = 0; i < n - 2; i++)
 temp1 = temp1->next;
 Node* temp2 = temp1->next;
 temp1->next = temp2->next;
 free(temp2);
}
int main()
{
 head = NULL;
 Insert(2);
 Insert(4);
 Insert(6);
 Insert(5);
 Print();
 int n;
 cout << "Enter a position" << endl;
 cin >> n;
 Delete(n);
 Print();
 return 0;
 }
