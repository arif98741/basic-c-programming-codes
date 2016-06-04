#include <stdio.h>
int main()

{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x>y && x>z)
        printf("%d is maximum\n",x);

    if(y>x && y>z)
        printf("%d is maximum\n",y);

    if(z>x && z>y)
        printf("%d is maximum\n",z);

    return 0;
}
