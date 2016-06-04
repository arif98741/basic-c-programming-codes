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
    int fact,i,n;

    while (scanf("%d",&n)!=EOF){
            fact=1;
        for(i=2;i<=n; i++){
            fact=fact*i;
        }
        printf("%d\n",fact);

    }

    return 0;
}


