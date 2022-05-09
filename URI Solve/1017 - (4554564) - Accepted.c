#include <stdio.h>

int main()
{
    int S;
    int H;
    float D,M = 12;

    scanf("%d %d",&S,&H);

    D = (S/M)*H;

    printf("%.3f\n",D);


    return 0;
}
