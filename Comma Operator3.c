/**
//Comma Operator
( , , , )
*/
#include <stdio.h>
int main()
{
    int a;
    int b;
    int comma;
    comma=(a=5,b=a,a);

    printf("%d",comma);



}
//Execute from left to right

