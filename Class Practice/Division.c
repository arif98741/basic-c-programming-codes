#include <stdio.h>
int main()
{
    float a;
    float b;
    float c;
    float d;
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b-4*a*c)/2*a;
    printf("%.2f",d);
return 0;
}
