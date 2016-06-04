#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    a=5; //5
    b=10; //10
    c=15; //15
    a=c; //15 This is for understanding the process
    a+=b; //25
    a-=c; //10
    a=a+b; //20
    a*=c; //300
    b=a;
    a=b;

    printf("The result is %d\n",a);
    printf("The result is %d\n",b);
    printf("The result is %d\n",c);
    printf("The result is %d\n",a);
    printf("The result is %d\n",a);

    return 0;
}
