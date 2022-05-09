#include <stdio.h>
int main()

{
  float a;
  int i;
  int count=0;
  for(i=1; i<=6; i++){
    scanf("%f",&a);
    if(a>0){
        count++;
    }
  }
  printf("%d valores positivos\n",count);


    return 0;
}
