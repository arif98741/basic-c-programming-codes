#include <stdio.h>
int main()
{
    int phy,che,math,eng;
    int total; /// for defining total marks of
    int avg; 	/// for defining average of the total marks

    scanf("%d%d%d%d",&phy,&che,&math,&eng); /// Here we will take values of declared subjects.
    total=phy+che+math+eng; /// Here we have calculated the total marks of four subjects.
    avg=total/4; ///Herex we have divide total by 4 to get average of the total numbers.

 /// Now we will define different conditions for finding the result is
 /// A+/A/A-/pass/fail

    if(avg>=80){
		printf("The result is A+");
    }

    else if(avg>=70){
		printf("The result is A");
    }

    else if(avg>=60){
		printf("The result is A-");
    }

    else if(avg>=50){
		printf("The result is B+");
    }

    else if(avg>=40){
		printf("The result is Pass");
    }

  else{
	printf("The result is Fail");
  }

    return 0;
}
