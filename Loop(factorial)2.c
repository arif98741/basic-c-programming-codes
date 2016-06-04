/// 5!= 1*2*3*4*5
///sample input 5
///             6
///             0

///sample output 120
///              720
///              1

#include <stdio.h>
int main()
{
    int fact,n;

    while (scanf("%d",&n)!=EOF){
            fact=1;

        while(n>1){
            fact=fact*n;
            n--;
        }
        printf("%d\n",fact);

    }

    return 0;
}



