#include <stdio.h>
int main()
{
    int i,n;
    int check;
    while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }

        for(i=1; i<=n; i++)
        {
            if(i<=n-1){
                printf("%d ",i);
            }

            if(i==n){
                printf("%d\n",i);
            }

        }


    }
    return 0;
}
