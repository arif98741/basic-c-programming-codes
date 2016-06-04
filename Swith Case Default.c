#include  <stdio.h>
int main()
{
    int number;
    scanf("%d",&number);

    switch (number)

    {
        case 10:
        printf("Number is 10\n");
        break;

        case 9:
        printf("Number is 9\n");
        break;

        case 8:
        printf("Number is 8\n");
        break;
        default:
            printf("Unknown");
            break;



    }

    return 0;
}
//This program shows how to check any given numbers
// If it is matched then it will be printed
// If it is not matched then it will not be printed
// When break will be used then other programs of below will not be executed
//Break is used for not going to the execution to the below
// If first case is matched then others(below) will be printed also as true.
// Case can be used also for counting exam result such as A+,A,A-,B+B

