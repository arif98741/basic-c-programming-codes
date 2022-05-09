#include<stdio.h>
int main(void){
    int i,count=0;

    float n,sum=0.0,ave;

    for(i=1;i<=6;i++){
        scanf("%f",&n);
        if(n>0){
            sum = sum+n;
            count++;
        }
        ave=sum/count;
    }
    printf("%d valores positivos\n",count);
    printf("%.1lf\n",ave);
    return 0;
}

///completed
