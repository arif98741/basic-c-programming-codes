#include <stdio.h>
int main()
{
    int arr[5], i,opt,pos;
    printf("Enter 5 numbers\n");
    for(i=0; i<5; i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter number from input to get position: ");
    scanf("%d",&opt);
    for(i=0; i<5; i++){
        if(opt==arr[i]){
            pos=i;
        }
    }
    printf("The position is %d",pos);

    return 0;
}
