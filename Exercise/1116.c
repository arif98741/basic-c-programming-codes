#include <stdio.h>
int main()
{
    int i;
    int test_case;
    float x,y;
    scanf("%d",&test_case);
    for(i=1; i<=test_case; i++){
        scanf("%f %f",&x,&y);
        if(y==0){
            printf("divisao impossivel\n");
        }
        else{
         printf("%.1f\n",x/y);
        }

 }
  return 0;

}
