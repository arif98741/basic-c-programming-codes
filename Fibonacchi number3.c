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
    int n,T;
    int i;
    int a,b,c;
    scanf("%d",&T);

    while(T--){
        scanf("%d",&n);
        a=0,b=1;   ///assigned here so that the value of a and b can't be updated.
        for(i=1; i<=n; i++){
                if(i==n)
           printf("%d\n",a);
           c = a+b;
           a = b;
           b = c;
        }
    }


    return 0;
}

///Tutorial 40
