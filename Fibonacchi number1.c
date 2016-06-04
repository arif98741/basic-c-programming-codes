///Fibonacci number 0 1 1 2 3 5 8 13.......
///sample input    3
///                3
///                4
///                7

///sample output      1
///                   2
///                   8

#include <stdio.h>
int main()
{
    int n=50;
    int i;
    int a=0,b=1,c;

    while(a<=50){
       printf("%d ",a);
       c=a+b;
       a=b;
       b=c;
    }


    return 0;
}

///Tutorial 40

