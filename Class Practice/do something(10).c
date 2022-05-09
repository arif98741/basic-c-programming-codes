#include <stdio.h>
int main()

{
    int i=0,j=0;
    if(i&&(j=i+10)){

        printf("%d",j);
    }

    return 0;
}
///here there was problem of &&
/// if i use && then two statements will
/// after e\
