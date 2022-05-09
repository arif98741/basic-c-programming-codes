///completed
#include <stdio.h>
int main()
{
    int i;
    int x,y;
    int value=0;
    while(1){
          scanf("%d %d",&x,&y);
          if(x<=0 || y<=0){
            break;
          }
          if(x>y && y!=0){
            for(i=y; i<=x; i++){
                printf("%d ",i);
                value = value+i;
            }
            printf("Sum=%d\n",value);
            value=0;
          }

          if(x<y && x!=0){
            for(i=x; i<=y; i++){
                printf("%d ",i);
                value = value+i;
            }
            printf("Sum=%d\n",value);
            value=0;
          }


    }



    return 0;
}
