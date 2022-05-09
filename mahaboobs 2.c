#include <stdio.h>
int main()
{
    int marks;
    scanf("%d",&marks);

    if(marks>=80 && marks<=100){
        printf("A+\n");
    }
    if(marks>=70 && marks<=79){
        printf("A\n");
    }

     if(marks>=60 && marks<=69){
        printf("B\n");
    }
    if(marks>=50 && marks<=59){
        printf("C\n");
    }
    if(marks>=40 && marks<=49){
        printf("D\n");
    }
    if(marks>=1 && marks<=39){
        printf("F\n");
    }
    return 0;
}

