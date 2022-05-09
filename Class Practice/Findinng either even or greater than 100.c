#include <stdio.h>
int main()

{
    int num;
    scanf("%d",&num);
    if(num%2==0 || num>100){
        printf("The number is either even or greater than 100");
    }

    else{
        printf("The number is not in range");
    }

    return 0;
}
