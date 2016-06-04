#include <stdio.h>
int main()
{
    int i=1;


    for(i=1; i<=5; i++)
    {
        printf("%d\n",i);
    }

    ///Compare for loop with go to
    ///int i=1;
    ///loop:
    ///printf("%d\n",i);
    ///i++;
    ///if(i<=5)
    ///goto loop;



    return 0;
}
//For loop explanation
// i=1 is initialization,it works for one time(During entering into loop;then it has no duty)
//i<=5 is condition(It explains how many times loop will move around )
//i++ is increment/ decrement(it will works for all the time except entering into loop during moving around of loop)


//In for loop system compiler will check initialization value first,then it will check the condition
//If condition become true then compiler start to execute body program.
//After completing work of body compiler will go to increment/decrement part of the program.Then it will check the condition again
//In this way loop will move according the number that given in condition part

