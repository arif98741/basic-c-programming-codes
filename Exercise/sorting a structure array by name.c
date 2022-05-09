#include <stdio.h>
#include <string.h>
struct cse12
{
    char name[20];
    int id;
    double cgpa;
}student[10];

void output(struct cse12 student[])
{
    printf("*******OutPUT******\n");
    int i;
    for(i=0; i<3; i++)
    {
        printf("%s %d %.2lf\n",student[i].name,student[i].id,student[i].cgpa);
        //scanf("%s%d%lf",student[i].name,&student[i].id,&student[i].cgpa);
    }
}

void input(struct cse12 student[])
{
    printf("*******INPUT******\n");
    int i;
    for(i=0; i<3; i++)
    {
        scanf("%s%d%lf",student[i].name,&student[i].id,&student[i].cgpa);
    }
}

void namesort(struct cse12 student[])
{
    int i,j;
    for(i=0; i<2; i++){
        for(j=i+1; j<3; j++){
            if(strcmp(student[i].name,student[j].name)>0){
                struct cse12 temp;
                strcpy(temp.name,student[i].name);
                temp.id = student[i].id;
                temp.cgpa = student[i].cgpa;


                strcpy(student[i].name,student[j].name);
                student[i].id = student[j].id;
                student[i].cgpa = student[j].cgpa;


                strcpy(student[j].name,temp.name);
                student[j].id = temp.id;
                student[j].cgpa = temp.cgpa;
            }
        }
    }
}

int main()
{
    input(student);
    output(student);
    namesort(student);

    return 0;
}
