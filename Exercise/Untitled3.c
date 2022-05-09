#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a%2==0){
        printf("%d is Even\n",a);
    }
    else{
     printf("%d is Odd\n",a);
    }

    if(b%2==0){
        printf("%d is Even\n",b);
    }else{
     printf("%d is Odd\n",b);
    }

    if(c%2==0){
        printf("%d is Even\n",c);
    }else{
     printf("%d is Odd\n",c);
    }

    return 0;
}
