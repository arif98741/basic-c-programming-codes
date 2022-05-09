#include <stdio.h>
int main()
{
    int n;
    int i=1;

    while(1){
        scanf("%d",&n);
        if(n==2002){
           printf("Acesso Permitido\n");
           break;
        }
        else{
            printf("Senha Invalida\n");
        }

    }

    return 0;
}

/*

2200
1020
2022
2002
Senha Invalida
Senha Invalida
Senha Invalida
Acesso Permitido

*/
