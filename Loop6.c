
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    start:
        printf("%d\n",a);
        a++;

        if (a<=7)

            goto start;

    return 0;
}
