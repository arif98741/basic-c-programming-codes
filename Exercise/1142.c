#include <stdio.h>
int main()
{
    int count = 0;
    int i;
    while(1){
        for(i=1; i<100; i++)
        {

            printf("%d",i);
            if(i=5)
                break;
        }
    }

    return 0;
}
