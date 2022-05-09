#include <stdio.h>
int main()
{
    int i,j=1,k=1;

    int test_case,value=1;
    scanf("%d",&test_case);

    for(i=1; i<=test_case; i++)
    {
        j =i*i;
        k = i*i*i;
        printf("%d %d %d",i,j,k);
        printf("\n");

    }

    return 0;
}
///completed
