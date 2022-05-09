#include <stdio.h>
int avg(int array[], int n)
{
    int i,sum=0,avg=0;
    i=0;
    for(i=0; i<n; i++)
    {
        sum = sum+array[i];
        avg = sum/n;
    }
    return avg;

}


int main()
{
    int n,i,result,sum;
    printf("Enter array size\n");
    scanf("%d",&n);
    int array[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);

    }
    result = avg(array[i],n);
    printf("%d",result);


    return 0;
}
