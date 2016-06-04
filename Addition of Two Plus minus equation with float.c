#include <stdio.h>
int main()

 {
    int xply;
    int xmny;
    int x;
    int y;

    printf("Enter X+Y:");
    scanf("%d",&xply);

    printf("Enter X-Y:");
    scanf("%d",&xmny);

    x=(xply+xmny)/2;
    y=(xply-xmny)/2;

    printf("The value of X and Y are %d and %d",x,y);

  return 0;

  }
