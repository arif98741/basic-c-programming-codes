#include <stdio.h>
int s[100],top=-1;
int i;
void push(int element)
{
    ++top;
    s[top]= element;
}
void display()
{
    for(i=0; i<=top; i++)
    printf("%d\n",s[i]);
}
void pop()
{
 top--;
}
int main()
{
    printf("After Pushing Elements:\n");
    push(101);
    push(21);
    push(51);
    display();
    printf("\nAfter Popping Elements:\n");
    pop();
    display();
    printf("\nAgain Popping Elements:\n");
    pop();
    display();
    return 0;
}
