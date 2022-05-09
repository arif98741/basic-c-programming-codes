#include <stdio.h>
int main()
{
    int a,b,c=1,d=5,e;
    printf("How many times do you want to run the operations?\n");
    scanf("%d",&e);
    while(c<=e){
            printf("Enter the number \n");
    scanf("%d",&a);
    b=a;
    printf("%d x %d = %d\n",d,b,d*b);
        c++;
    }

    return 0;
}
