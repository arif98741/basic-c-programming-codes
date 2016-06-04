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
    comma=(a=5,b=6,a+b);

    printf("%d",comma);



}
//Execute from left to right
