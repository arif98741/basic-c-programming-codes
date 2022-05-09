#include <stdio.h>
int main()
{
    int a,b,x;
    scanf("%d%d",&a,&b);


    if(b%a==0 || a%b==0){
        printf("Sao Multiplos\n");
    }

    else if(b%a!=0 || a%b!=0){
        printf("Nao sao Multiplos\n");
    }

    return 0;
}
