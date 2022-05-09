#include <stdio.h>
void main()

{
    int phy;
    int math;
    int bangla;
    int eng;
    int total;
    int avg;
    scanf("%d",&phy);
    scanf("%d",&math);
    scanf("%d",&bangla);
    scanf("%d",&eng);
    avg = (phy+math+bangla+eng)/4;

    printf("%d\n",avg);


}

