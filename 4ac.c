#include <stdio.h>
int main()
{
    float num1;
    float num2;
    float num3;
    float result;
    scanf("%f %f %f",&num1,&num2,&num3);
    result=(num2*num2-4*num1*num3)/2*num1;
    printf("%.2f",result);
return 0;
}
