#include <stdio.h>
int main()

{
    int a,b;
    a=5;
    a++;
    printf("%d\n",a);  //6
    //ai khane 1 add hoyese


    a++;
    printf("%d\n",a); //7
    //ai khane 1 add hoyese




    b = a++;   //7=7++
    printf("%d\n",b); //7
    printf("%d %d\n",a,b); //7,8
    //ai khane prothome a=7 bosece b te.
    //Then a er value 1 berese


     b = ++a;
     printf("%d %d\n",a,b); //9,9
     // ai khane a er value agei bere  8 theke 9 hoyese
     // Then sei value b te bosece


    a--;
    printf("%d\n",a); //8
    //ai khane 1 substract hoyese

    --a;
   printf("%d\n",a); //7
    //ai khane 1 substract hoyese


    b = a--;
    printf("%d\n",b); //7
    printf("%d %d\n",a,b); //6,7


    b = --a;
    printf("%d\n",b); //5
    printf("%d %d\n",a,b); //5,5





    return 0;
}

// a++ ----> The value will be added 1(after)
// ++a ----> The value will be added 1(before)
// b=a++ --> b=a --> a=a+1
// b=++a  --> a=a+1 --> b=a
//Fully bojhte parlam onk chestar por
