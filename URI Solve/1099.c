#include<stdio.h>
int main()
{
    int x,y;
    int sum=0,n;
    int i,j;
    scanf("%d",&n);

    for(j=0 ; j<n ; j++)
    {
        scanf("%d%d",&x,&y);

        if(x<y)
        {
            for(i=(x+1) ; i<y ; i++)
            {
                if(i%2!=0)
                {
                    sum+=i;
                }
            }
            printf("%d\n",sum);
            sum=0;
        }

        else if(x>y)
        {
            for(i=(y+1) ; i<x ; i++)
            {
                if(i%2!=0)
                {
                    sum+=i;
                }
            }
            printf("%d\n",sum);
            sum=0;
        }
        else if(x==y)
        {

            printf("%d\n",sum);
        }
    }
    return 0;
}
