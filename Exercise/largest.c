#include <stdio.h>
int main()
{
    int largest;
    int i;
    int arr[10];
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=1; i<5; i++){
        if(largest<arr[i]){
            largest= arr[i];
        }
    }
    printf("\nLargest value is %d\n",largest);

}
