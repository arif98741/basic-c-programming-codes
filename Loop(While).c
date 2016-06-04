#include <stdio.h>
int main()
{
    int i;
    i=1;

   while(i<=10)    ///Loop will move around until the value of i is less than or qual to 5;
    {
        printf("%d  ",i);
        i++;
   }


   ///Process of same work by using goto loop
   //loop:
       //printf("%d  ",i);
       //i++;
       //if(i<=5)
        //goto loop;


    return 0;
}



///In while loop, if the condition become true then compiler will do work of loop. Otherwise not
///For breaking condition i++,++i,i--,--i are used below printf()
//
