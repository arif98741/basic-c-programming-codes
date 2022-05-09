#include<stdio.h>
int main()
{
    int c, y, x,i;
    scanf("%d",&x);

    for(i=0 ; i<x ; i++)
    {
        scanf("%d",&c);

        for(y=2; y<=c; y++)
        {
            if(c%y==0)
                break;
        }

        if(y==c)
        {
            printf("%d eh primo\n",c);

        }
        else
            printf("%d nao eh primo\n",c);

    }

    return 0;
}
///completed
