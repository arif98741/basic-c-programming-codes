#include <stdio.h>
/*aray_size()
    {

      int n[5],m;
      int temp;
      int i,j;
      scanf("%d",&m);

    }*/

int main()
{
    int n,m;
    int i,j;
    int a[100];


    printf("Enter test case for the program: ");
    scanf("%d",&n);
    printf("Enter numbers: ");
    scanf("%d",&m);


    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&a[j]);
            printf("Enter numbers: \n");
            scanf("%d",&m);




        }

    }


    return 0;
}
