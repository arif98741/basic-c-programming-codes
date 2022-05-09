#include <stdio.h>
int main()
{
    int N;
    int i;
    int temp;
    scanf("%d",&N);
    if(N>5 && N<2000){
                for(i=1; i<=N; i++){
        if(i%2==0 ){
                temp=i*i;
        printf("%d^2 = %d\n",i,temp);

        }
    }

    }



    return 0;
}
