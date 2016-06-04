#include <stdio.h>
int main()
{
    int mark;
    scanf("%d",&mark);

    if(mark>=80) printf("A+");
    else if(mark>=75) printf("The result is A");
    else if(mark>=70) printf("The result is A-");
    else if(mark>=65) printf("The result is B+");
    else if(mark>=60) printf("The result is B");
    else if(mark>=55) printf("The result is B-");
    else if(mark>=50) printf("The result is C+");
    else if(mark>=45) printf("The result is C");
    else if(mark>=40) printf("The result is D");

    else  printf("The result is FAIL");







    return 0;
}
//When result of any work depend on two statement then we use nested  if-else
//When result of any work depend on more than two statement then we use if else Ladder
