#include <stdio.h>
int main()
{
    int i;
    int arr[5];
    int n;
    int temp;
    for(i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    for(n=0; n<5; i++){

        for(i=0; i<5; i++){
                temp = arr[i];
            if(temp >arr[i+1] ){
                arr[i]= arr[i+1];

            }
            printf("%d ",arr[i]);
        }
    }


    return 0 ;
}

