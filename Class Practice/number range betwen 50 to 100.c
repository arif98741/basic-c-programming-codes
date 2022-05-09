#include <stdio.h>
int main()
{
     int num;
     scanf("%d",&num);

     if(num>=50 && num<=100){
        printf("The number is between 50 to 100");
     }
     else{
        printf("The number is not in range");
     }

    return 0;
}
