#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;

} s,st;

int main()
{
    printf("Enter student information: \n");
    printf("Enter Name: ");
    scanf("%s",st.name);

    printf("Enter Roll Number: ");
    scanf("%d",&s.roll);

    printf("Enter Marks: ");
    scanf("%f",&s.marks);

    printf("Displaying information: \n\n");
    printf("Name: ");
    puts(st.name);

    printf("Roll Number: %d\n",s.roll);
    printf("Marks: %.2f",s.marks);


    return 0;
}
