#include <stdio.h>
int main()
{
    int test_case,i,num,flag=0,j;
    scanf("%d",&test_case);
    for(i=0; i<test_case; i++)
    {
        scanf("%d",&num);
        for(j=0; j<num/2; j++)
        {
            if(num%2){
                flag = 1;
            }

        }
        if(flag==1){
            printf("Not Prime\n");
        }
        if(flag==0){
            printf("Prime");
        }
    }

    return 0;
}
