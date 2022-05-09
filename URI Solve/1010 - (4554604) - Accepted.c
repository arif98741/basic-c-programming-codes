#include <stdio.h>

int main()
{
    int A,B,C,D;
    float E,F,Total;

    scanf("%d %d %f",&A,&B,&E);
    scanf("%d %d %f",&C,&D,&F);

    Total = ((B*E) + (D*F));

    printf("VALOR A PAGAR: R$ %.2f\n",Total);

    return 0;
}