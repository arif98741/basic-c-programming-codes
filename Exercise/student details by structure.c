#include <stdio.h>
struct data
{
    char name[12];
    int id;
    double cgpa;

}student[2];
void pri()
{
    int i;
    for(i=0; i<2; i++)
    {
        printf("Student ID: %d\n",student[i].id);
        printf("Student Name: %s\n",student[i].name);
        printf("Student CGPA: %.2lf\n",student[i].cgpa);
    }

}
int main()
{
    int i;

    for(i=0; i<2; i++)
    {
        scanf("%s %d %lf",student[i].name,&student[i].id,&student[i].cgpa);
    }
    pri();


    return 0;
}
