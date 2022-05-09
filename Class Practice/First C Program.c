#include <stdio.h>
void main()

{
    int phy;
    int math;
    int bangla;
    int eng;
    int total;
    int avg;
    scanf("%d %d %d %d",&phy,&math,&bangla,&eng);
    total=phy+math+bangla+eng;
    avg=total/4;

    printf("The average is %d\n",avg);

}
