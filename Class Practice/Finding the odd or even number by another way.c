#include <stdio.h>
int main()
{
    int num;
    int x,y; // we have taken this variables for keeping the value of num%2==0 and num%2==1

    scanf("%d",&num);
    x=num%2;
    y=num%2;

    if(x==0){
        printf("Even");
    }

    if(y==1){
        printf("Odd");
    }

    return 0;
}

