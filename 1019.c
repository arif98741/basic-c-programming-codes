#include <stdio.h>
int main()
{
    int N,M,s1,S,H;
    scanf("%d",&N);

    H=N/3600;
    s1=N%3600;
    M=s1/60;
    S=s1%60;

    printf("%d:%d:%d\n",H,M,S);

    return 0;
}
