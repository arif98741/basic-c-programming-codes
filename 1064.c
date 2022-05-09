#include <stdio.h>
int main()

{
  float a;
  int i;
  int count=0;
  float avg=0,avg1;
  for(i=1; i<=6; i++){
    scanf("%f",&a);
    if(a>0){
    count++;

    avg=avg+a;
    }
  }
    avg1=avg/count;
  printf("%d valores positivos\n",count);
  printf("%.1f\n",avg1);


    return 0;
}

