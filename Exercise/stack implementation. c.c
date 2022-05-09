#include <stdio.h>
int s[100],top=-1;
int i;

void push(int element)
{
    ++top;
    s[top]= element;

}
void display(){


    for(i=0; i<=top; i++)
    printf("%d\n",s[i]);


}
void pop()
{

 top--;

}

int main()
{

    push(100);
    push(12);
    pop();
    display();



}
