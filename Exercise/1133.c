#include <stdio.h>
int main()
{
    int x,y,i,temp1;
    scanf("%d %d",&x,&y);
    if(x<y)
    {
        for(i=x+1; i<y; i++)
        {
            temp1=i%5;
            if(temp1==2 || temp1==3)
            {
                printf("%d\n",i);
            }

        }
    }

    else if(x>y)
    {
        for(i=y+1; i<x; i++)
        {
            temp1=i%5;
            if(temp1==2 || temp1==3)
            {
                printf("%d\n",i);
            }
        }
    }


    return 0;
}
