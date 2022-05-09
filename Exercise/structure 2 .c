#include <stdio.h>
int add()
{
    int a,b,i,n;
    int value = 0;
    printf("How many number you want to add: ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("Enter no %d\n",i+1);
        scanf("%d",&a);
        value = value+a;
    }
    printf("Addition Result: %d",value);
}

int sub()
{
    int a,b,i,n;
    int value = 0;
    printf("Enter Numbers For Subtraction \n");
    printf("Number 1\n");
    scanf("%d",&a);
    printf("Number 2\n");
    scanf("%d",&b);


    printf("Subtraction Result: %d",a-b);
}
/*
int multi(int a,int b)
{
    int result;
    result = a*b;
    return result;
}
int div(int a,int b)
{
    int result;
    result = a/b;
    return result;
}*/

int main()
{
    int result_add;
    printf("Addition,subtraction,multiplication and division program\n");
    printf("For Addition press :1\nFor Subtraction Press :2\nFor Multiplication Press :3\nFor Division Press :4\n");
    int number;
    scanf("%d",&number);

    switch (number)

    {
        case 1:
        add();
        break;


        case 2:
        sub();
        break;


        case 3:
        break;

        case 4:
        break;

        default:
            number = 0;



    }

    return 0;
}
