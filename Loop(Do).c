#include <stdio.h>
int main()
{
    int i;
    i=1;

    do
        {
            printf("%d  ",i);
            i++;
         }
            while (i<=10);


     ///Converting do loop with goto loop
     //i=1;
    //loop:
        //printf("%d  ",i);
        //i++;
        //if(i<=5)
            //goto loop;


    return 0;
}
