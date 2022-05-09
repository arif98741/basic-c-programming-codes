#include <stdio.h>
struct student
{
    int roll;
    float marks;
    char name[50];

}s[10];

int main()
{

    int i;
    printf("Enter information of students:      \n");
    ///displaying information
    for(i=0; i<3; i++){
        s[i].roll=i+1;
        printf("\nFor roll number %d,\n",s[i].roll);

        printf("Enter name: ");
        scanf("%s",s[i].name);

        printf("Enter marks: ");
        scanf("%f",&s[i].marks);

        printf("\n");
    }

    printf("Displaying information: \n");
    for(i=0; i<3; i++){
        printf("\nRoll Number: %d\n",i+1);
        printf("Name: ");
        puts(s[i].name);
        printf("Marks: %.1f",s[i].marks);
        printf("\t\t");
    }

    return 0;

}
