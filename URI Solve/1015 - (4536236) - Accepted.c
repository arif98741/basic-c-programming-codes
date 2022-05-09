#include <stdio.h>
int main()
{

    double x1,x2,y1,y2,Distance;
    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);
    Distance = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    printf("%.4lf\n",Distance);

    return 0;///-2.5 0.4
///12.1 7.3
///16.1484
}
