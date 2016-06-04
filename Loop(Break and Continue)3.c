#include <stdio.h>
int main()
{
        int i;

        for (i=0; i<5; i++)

        {
             printf("%d ",i);

            if (i==3)
            continue;

            printf("%d ",i);


        }
// For using using continue statement every value will be printed two times except 3 in this program






            return 0;
}

