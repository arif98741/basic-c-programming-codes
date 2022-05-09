#include <stdio.h>

int main()
{
    int X,Y;
    double A,B,C,D,E;
    scanf("%d %d",&X,&Y);

    A=4;
    B=4.5;
    C=5;
    D=2;
    E=1.5;

    switch(X)
    {
    case 1:
        printf("Total: R$ %.2lf\n",A*Y);
        break;
    case 2:
        printf("Total: R$ %.2lf\n",B*Y);
        break;
    case 3:
        printf("Total: R$ %.2lf\n",C*Y);
        break;
    case 4:
        printf("Total: R$ %.2lf\n",D*Y);
        break;
    case 5:
        printf("Total: R$ %.2lf\n",E*Y);
        break;
        }

    return 0;
}
