#include <stdio.h>
int main()
{
    int n;
    int i;
    float x,y,z,value;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%f %f %f",&x,&y,&z);
        value = (x*2.0)+(y*3.0)+(z*5.0);
        value = value/10.0;
        printf("%.1f\n",value);
    }

    return 0;
}
///COMPLETED

