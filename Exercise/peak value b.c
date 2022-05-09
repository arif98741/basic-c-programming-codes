#include <stdio.h>
int main()
{
    int i;
    int j,n,temp;
    int test_case;
    int count=0;
    while(1)

    {

        scanf("%d",&test_case);
        for(i=1; i<=test_case; i++)
        {
            scanf("%d",&n);

            if(i>0 && i!=1 && i!=test_case && i<i-1 && i<i+1){
                count++;
            }

        }
        printf("Case %d: %d\n",i,count);
        count=0;
        if(test_case==0){
            break;
        }

    }

    return 0;
}
