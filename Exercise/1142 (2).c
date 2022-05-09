#include <stdio.h>
int main()
{
    int i,j;
    int a=0;
    int c=1;
    while(1)
    {

       a = a+1;
       for(j=0; j<3; j++)
       printf("%d PUM\n",a);
       if(a==7)
        break;

    }

    return 0;
}
