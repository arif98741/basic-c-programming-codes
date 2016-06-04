#include <stdio.h>
int main()

{
    int a,b,sum,n,i;

    while(scanf("%d",&n)){
    if(n==0)
        return 0;
    sum=0;
    for(i=1; i<=n; i++){
        scanf("%d",&a);
        sum=sum+a;

    }
    printf("%d\n",sum);
    }


    return 0;
}
///Here n indicates the total number of integers
///Program  will be used when the value of n is 0;
///Advanced loop for programming contest
