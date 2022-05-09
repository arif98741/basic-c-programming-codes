#include<stdio.h>
int main()
{
    int a,b,i,sum=0,j,n,x=0;
    scanf("%d",&n);

    for(j=0 ; j<n ; j++){
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        for(i=(a+1) ; i<b ; i++)
        {
            if(i%2!=0)
            {
                sum+=i;
            }
        }
        printf("%d\n",sum);
        sum=0;
    }
    else if(a>b)
    {
        for(i=(b+1) ; i<a ; i++)
        {
            if(i%2!=0)
            {
                sum+=i;
            }
        }
        printf("%d\n",sum);
        sum=0;
    }
    else if(a==b){

        printf("%d\n",x);
    }
    }
    return 0;
}
