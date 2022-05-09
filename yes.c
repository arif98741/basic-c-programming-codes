#include <stdio.h>

int main()
{
    int a;
    int total = 0;
    while(scanf("%d",&a))
    {
        if(a<=0)
            break;
        else
            total = total+a;

    }
    printf("The Total of Your Given Numbers is %d",total);

    return 0;
}
