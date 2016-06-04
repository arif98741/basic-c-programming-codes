///A number that can be only divided by that number or by '1' is called prime number.
/// Sample input    2
///                 1 10
///                 5 3

/// Sample output   17
///                 8

#include <stdio.h>
int main()
{
    int check,a,i;
    scanf("%d",&a);
    check=1;

    for(i=2; i<a; i++){
        if(a%i==0)
            check=0;
    }

    if(check==1)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;


}
