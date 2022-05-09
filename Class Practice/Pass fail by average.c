#include <stdio.h>
int main()
{
    int phy,che,math,eng;
    int avg;
    scanf("%d%d%d%d",&phy,&che,&math,&eng);
    avg=(phy+che+math+eng)/4;

    if(avg>50){
        printf("PASS");
    }
    if(avg<50){ // here we can also use else for getting the result in lie of if that means after if we can use else for defining the statement
        printf("FAIL");
    }


    return 0;
}
