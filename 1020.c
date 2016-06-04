#include <stdio.h>

int main()
{
    int N,D,D1,M,Y;
    scanf("%d",&N);

    Y=N/365;
    D1=N%365;
    M=D1/30;
    D=D1%30;

    printf("%d ano(s)\n",Y);
    printf("%d mes(es)\n",M);
    printf("%d dia(s)\n",D);

    return 0;
}
