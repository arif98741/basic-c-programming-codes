///Take n integer as input and print their sum
///Input format: n
///                n1 n2 n3.....nn
///Sample input : 5
///                5 6 9 2 7
///Sample input : 29


#include <stdio.h>
int main()
{
    int sum,a,i,n;
    sum=0;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("%d",sum);

   return 0;
}
