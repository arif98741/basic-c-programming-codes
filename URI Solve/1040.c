#include<stdio.h>

int main()
{
    float a,b,c,d,z,temp,ave,result,exam,p;

    scanf("%f %f %f %f",&a,&b,&c,&d);
    temp = ((a*2)+(b*3)+(c*4)+(d*1));

    ave=(temp/10);

    printf("Media: %.1f\n",ave);


    if(ave>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    if(ave<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    if(ave>=5.0 && ave<=6.9)
    {
        printf("Aluno em exame.\n");
        exam=z;

        scanf("%f",&p);
        printf("Nota do exame: %.1f\n",p);

        result=(ave+p)/2;


        if(result>=5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",result);
        }
        else if(result<=4.9)
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n",result);
        }

    }


    return 0;
}
