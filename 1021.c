#include <stdio.h>

int main()
{
    float N;/*
   float n,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
   float A,B,C,D,E,F,G,H,I,J,K,L;*/
   scanf("%f  ",&N);

   /*A=N/100;
   n=N%100;
   B=n/50;
   n1=n%50;
   C=n1/20;
   n2=n1%20;
   D=n2/10;
   n3=n2%10;
   E=n3/5;
   n4=n3%5;
   F=n4/2;
   n5=n4%2;
   G=n5/1;
   n6=n5%1;
   H=n6/0.50;
   n7=n6%0.50;
   I=n7/0.25;
   n8=n7%0.25;
   J=n8/0.10;
   n9=n8%0.10;
   K=n9/.05;
   n10=n9%.05;
   L=n10/.01;*/


   if (N>=0 && N<=1000000){
    printf("NOTAS:\n");
    printf(" nota(s) de R$ 100.00\n");
    printf(" nota(s) de R$ 50.00\n");
    printf(" nota(s) de R$ 20.00\n");
    printf(" nota(s) de R$ 10.00\n");
    printf(" nota(s) de R$ 5.00\n");
    printf(" nota(s) de R$ 2.00\n");

    printf("MOEDAS:\n");
    printf(" moeda(s) de R$ 1.00\n");
    printf(" moeda(s) de R$ 0.50\n");
    printf(" moeda(s) de R$ 0.25\n");
    printf(" moeda(s) de R$ 0.10\n");
    printf(" moeda(s) de R$ 0.05\n");
    printf(" moeda(s) de R$ 0.01\n");
   }
    return 0;
}
