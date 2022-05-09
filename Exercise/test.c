#include <stdio.h>
int main()
{
    int i=1,j=1;
    for(i=1; i<=120; i++){
        if(i==(j+10)){
                j+=10;
            continue;
        }
        printf("%d\t",i);
    }
    return 0;
}
