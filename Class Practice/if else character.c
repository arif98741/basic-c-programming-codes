#include <stdio.h>
int main()
{

    int a;
    int b;
    char c;
    scanf("%c",&c);
    scanf("%d%d",&a,&b);
    if(c=='a'){
        printf("A+B=%d",a+b);
    }
     if(c=='s'){
        printf("A-B=%d",a-b);
     }


    return 0;
}
