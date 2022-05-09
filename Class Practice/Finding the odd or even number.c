#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);

    if(num%2==0){
        printf("Even");
    }

    if(num%2==1){
        printf("Odd");
    }

    return 0;
}
