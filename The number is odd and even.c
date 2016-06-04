#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);

    if(num%2==0)
        printf("%d is Even number\n",num);

    if(num%2==1)
        printf("%d is Odd number\n",num);


    return 0;
}
