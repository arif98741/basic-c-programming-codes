#include <stdio.h>
int main()
{
    int i=1,j=60;
    int a;
    int temp;

    while(1){
        printf("I=%d J=%d",i,j);
        printf("\n");

        i+=3;
        j-=5;
        if(j<0){
            break;
        }
    }

    return 0;
}
