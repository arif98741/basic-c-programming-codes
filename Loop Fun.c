#include <stdio.h>
int main()
{
    int a=1;


    start:
        printf("%d %d %d %d %d %d %d %d %d\n",a,a,a,a,a,a,a,a,a);
        a++;

        if (a++)

            goto start;

    return 0;
}
