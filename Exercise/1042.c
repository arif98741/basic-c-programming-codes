#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int temp;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
            if(b>c && b>a){
                printf("%d\n%d\n%d\n\n\n",a,b,c);
                printf("%d\n%d\n%d\n",c,b,a);

            }

            else{ /// b<c
                printf("%d\n%d\n%d\n",a,c,b);
                printf("%d\n%d\n%d\n",b,c,a);
            }
    }
    if(b>c && b>a){
            if(c>a && c>b){
                printf("%d\n%d\n%d\n\n\n",b,c,a);
                printf("%d\n%d\n%d\n\n",a,c,b);

            }

            else{ /// c<a
                printf("%d\n%d\n%d\n\n",b,a,c);
                printf("%d\n%d\n%d\n",c,a,b);
            }
    }
    if(c>a && c>b){
            if(a>b && a>c){
                printf("%d\n%d\n%d\n\n\n",c,a,b);
                 printf("%d\n%d\n%d\n\n",b,a,c);

            }

            else{ /// c<a
                printf("%d\n%d\n%d\n\n",c,b,a);
                printf("%d\n%d\n%d\n",a,b,c);
            }
    }

    return 0;
}
///incomplete
