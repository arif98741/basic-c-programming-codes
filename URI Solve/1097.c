#include<stdio.h>
int main()
{
    int i,j,x=7,y=5;
    for(i=1 ; i<=9 ; i=i+2)
    {
        for(j=x; j>=y ; j--)
        {
            printf("I=%d J=%d\n",i,j);
        }
        i=i+2;
        j=j+2;
    }

    return 0;
}
