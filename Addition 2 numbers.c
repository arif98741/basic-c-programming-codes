#include <stdio.h>
int main ()


{
    int num1,num2;
    int n;
    //scanf("%d",&n);
    for(n; n<=10; n++){
        if(n<=0){
            scanf("%d%d",&num1,&num2);
            printf("%d",num1+num2);
        }
    }

    return 0;
}
