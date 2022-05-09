#include <stdio.h>
int main()
{
    float a,result,c=0,temp=0;
    while(1)
    {
        if(temp==2)
            break;
        scanf("%f", &a);
        if(a>=0 && a<=10)
        {
            temp++;
            c+=a; /// 6+
        }
        else
            printf("nota invalida\n");
    }
    result=c/2.00;
    printf("media = %.2lf\n", result);
    return 0;
}
///completed
