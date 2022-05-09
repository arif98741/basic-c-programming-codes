#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float cgpa;

}personal;
struct address
{
    char village[20];
    char post[20];
    char postcode[20];
    char policestation[20];
    char district[20];




} address;

struct contact
{
    char mobile1[20];
    char mobile2[20];
    char email[20];
    char website[25];

} contact;


int main()
{
    printf("Program for a student details.\n\n");
    printf("Enter your name: ");
    gets(personal.name);
    printf("Enter your Roll Number: ");
    scanf("%d",&personal.roll);
    printf("Enter your CGPA: ");
    scanf("%f",&personal.cgpa);

    printf("\nEnter Your Village Name: ");
    scanf("%s",address.village);
    printf("\nEnter Your Post Office Name: ");
    scanf("%s",address.post);
    printf("\nEnter Your Post Code: ");
    scanf("%s",address.postcode);
    printf("\nEnter Your Police Station Name: ");
    scanf("%s",address.policestation);
    printf("\nEnter Your District Name: ");
    scanf("%s",address.district);
    printf("Enter your first mobile number: ");
    scanf("%s",contact.mobile1);
    printf("Enter your second mobile number: ");
    scanf("%s",contact.mobile2);
    printf("Enter your Email: ");
    scanf("%s",contact.email);
    printf("Enter your website: ");
    scanf("%s",contact.website);

    printf("\n\nDisplaying information:\n");
    printf("Personal Information:\n");
    printf("Name: ");
    puts(personal.name);
    printf("Roll: %d\n",personal.roll);
    printf("CGPA: %.2f\n",personal.cgpa);

    printf("\n\tAddress Section: \t");
    printf("Village: ");
    puts(address.village);
    printf("Post Office: ");
    puts(address.post);
    printf("Post Code: ");
    puts(address.postcode);
    printf("Police Station: ");
    puts(address.policestation);
    printf("District: ");
    puts(address.district);

    printf("\n\nContact Section: \n");
    printf("First Mobile Number: ");
    puts(contact.mobile1);
    printf("Second Mobile Number:");
    puts(contact.mobile2);
    printf("Email:");
    puts(contact.email);
    printf("Website:");
    puts(contact.website);




}
