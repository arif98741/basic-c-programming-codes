#include<stdio.h>

int main()
{
    int i,n,j;
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]<arr[j])
            {
                arr[i]=arr[i]^arr[j];
                arr[j]=arr[i]^arr[j];
                arr[i]=arr[i]^arr[j];
            }
        }
    }
     printf("\n");

    for(i=n-1; i>=0; i--)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
