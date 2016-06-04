///A number that can be only divided by that number or by '1' is called prime number.
/// Sample input    2
///                 1 10
///                 5 3

/// Sample output   17
///                 8

#include <stdio.h>
int main()
{
        int ,T,check,a,i,m,n,j,sum,temp;
        m = 10;
        n = 1;

        if(m>n){
            temp=m;
            m=n;
            n=temp;

           }
        sum = 0;

        for(j=m; j<=n; j++){

            a=j;
            check=1;
            if(a==1)
                check = 0;


            for(i=2; i<a; i++){
                if(a%i==0)
                    check=0;
            }

            if(check==1){
                    sum=sum+a;
                }


            }
    printf("sum is %d ",sum);


        return 0;


}
