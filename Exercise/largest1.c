#include <stdio.h>
int main()
{

    int arr[100],i,n,a,j;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i]<arr[j]){
                a= arr[i];
                arr[i]= arr[j];
                arr[j]= a;
            }
        }
    }
    printf("Results are ");
    for(i=0; i<n; i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}
