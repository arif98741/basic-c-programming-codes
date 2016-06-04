#include <stdio.h>
int main()

{
    int a,b,sum,n,i;

    while(scanf("%d",&n)!=EOF){
    sum=0;
    for(i=1; i<=n; i++){
        scanf("%d",&a);
        sum=sum+a;

    }
    printf("%d",sum);
    }


    return 0;
}
//EOF will be used where there inputting process is closed.
//Advanced loop for programming contest
