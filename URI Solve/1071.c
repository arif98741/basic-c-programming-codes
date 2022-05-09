#include <stdio.h>
int main()
{
    int a;
    int x,y,i=0,sum=0;
    scanf("%d %d",&x,&y);

    if (x>y)
    {
        for(i=y; i<x; i++)
        {
            if(i%2!=0) sum = sum+i;
        }

    }

    else if(y>x)
    {
        for(i=x; i<y; i++)
        {
            if(i%2!=0) sum = sum+i;
        }
    }


    else if(x==y)
    {
        sum=0;

    }
    printf("%d",sum);

    return 0;
}
