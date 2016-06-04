///A number that can be only divided by that number or by '1' is called prime number.
/// Sample input    2
///                 1 10
///                 5 3

/// Sample output   17
///                 8

#include <stdio.h>
int main()
{
    int check,a,i,m,n,j;
    m = 1;
    n = 10;


    for(j=m; j<=n; j++){
    a=j;
    check=1;


        for(i=2; i<a; i++){
            if(a%i==0)
                check=0;
        }

        if(check==1)
            printf("%d Prime\n",a);
        //else
            //printf(" Not Prime");
}

    return 0;


}
