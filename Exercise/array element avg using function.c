#include <stdio.h>
int avg(int *array,int n)
{
    int i,sum=0;
    int avg=0;
    for(i=0; i<n; i++)
    {
        sum+=array[i];

    }
    avg = sum/n;
    return avg;

}


int main()
{
    int n,i,y;
    printf("Enter array size\n");
    scanf("%d",&n);
    int array[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    y = avg(array[],n);
    printf("%d",y);

    return 0;
}
