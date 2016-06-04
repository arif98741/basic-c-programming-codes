#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);

    if(num>0)
        printf("%d is Positive\n",num);
    if(num<0)
        printf("%d is Negative\n",num);
    if(num==0)
        printf("%d is Zero\n",num);

       return 0;
}


