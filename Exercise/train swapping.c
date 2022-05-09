#include <stdio.h>
int main()
{

    int arr[10],i,j,count;
    int n=0,m=0; /// Here n for test case
    int p;
    printf("Enter test case: \n");
    scanf("%d",&n);

    for(i=0; i<n; i++){
            printf("Enter number of elements ");
            scanf("%d",&m);
            for(i=0; i<m; i++){
              scanf("%d",&arr[i]);
        }
    }

    return 0;
}
