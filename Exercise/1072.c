#include <stdio.h>
int main()
{
    int i,n,num,in=0,out=0;
    long int value;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&value);
        if(value>=10 && value<=20){
             in++;
        }
    }
    printf("%d in\n",in);
    printf("%d out\n",in-n);

    return 0;
}
