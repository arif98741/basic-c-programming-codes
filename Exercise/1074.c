#include <stdio.h>
int main()
{
    int test_case,p,a;
    scanf ("%d",&test_case);
    for(a=1; a<=test_case; a++)
    {
        scanf ("%d",&p);
        if(p==0)
            printf("NULL\n");
        else if(p<=0 && p%2==0)
            printf ("EVEN NEGATIVE\n");
        else if(p<=0 && p%2==-1)
            printf ("ODD NEGATIVE\n");
        else if(p>=0 && p%2==0)
            printf ("EVEN POSITIVE\n");
        else if(p>=0 && p%2==1)
            printf ("ODD POSITIVE\n");
    }
    return 0;
}
///completed

