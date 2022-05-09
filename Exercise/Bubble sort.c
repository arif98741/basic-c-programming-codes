#include <stdio.h>
int main()
{
    int data[100],i,n,step,y;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Enter element: ");
    for(i=0; i<n; ++i)
    {

        scanf("%d",&data[i]);
    }

    for(step=0;step<n-1;++step)
    for(i=0;i<n-step-1;++i)
    {
        if(data[i]>data[i+1])
        {
            y=data[i];
            data[i]=data[i+1];
            data[i+1]=y;
        }
    }
    printf("\nResult: ");
    for(i=0;i<n;++i)
         printf("%d  ",data[i]);
         printf("\n");
    return 0;
}
