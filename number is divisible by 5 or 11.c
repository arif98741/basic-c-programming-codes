#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);

    if(num%5==0 && num%11==0)
        printf("%d is divisible by 5 and 11\n",num);
    if(num%5!=0 || num%11!=0)
        printf("%d is not divisible by 5 and 11\n",num);

       return 0;
}

