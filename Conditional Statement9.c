#include <stdio.h>
int main()
{
    int a=1;
    int b;


    if (--a) // --a means value will be reduced first then it will be assigned
        printf("%d",a);


    return 0;
}

// a= means assigning value to the a
// a== means checking the value of a
//b=a--,b=1,a=0
//b=1 true. for this condition is true and for this output will be the value of a=0
