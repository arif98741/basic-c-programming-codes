#include <stdio.h>
int main()
{
    int a;
    int n,i=0;
    int flag=0;
    int sum=0;
    scanf("%d%d",&a,&n);

    for(i=n; i<=a; i++)
    {
        if(n<=0)
        {
            scanf("%d",&n);
        }
        sum=i+sum;

    }

    printf("%d",sum);

    return 0;
}
