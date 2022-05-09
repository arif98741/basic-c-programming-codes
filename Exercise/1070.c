#include<stdio.h>
int main(){
    int i,p;
    scanf("%d",&p);
    if(p%2==0)
    {
        p=p+1;
    }
    else{
        p=p;
    }

    printf("%d\n",p);
    for(i=1;i<=5;i++)
    printf("%d\n",p=p+2);
    return 0;
}
