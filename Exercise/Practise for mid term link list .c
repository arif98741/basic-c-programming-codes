#include <stdio.h>
struct node
{
    int roll;
    char name[25];
    int age;
    struct node *next;


};
void main()
{

    struct node  n1, n2, n3;
	struct node  *p;
	scanf ( ”%d %s %d”, &n1.roll, n1.name, &n1.age);
 	scanf ( ”%d %s %d”, &n2.roll, n2.name, &n2.age);
	scanf ( ”%d %s %d”, &n3.roll, n3.name, &n3.age);
	n1.next  =  &n2;
	n2.next  =  &n3;
	n3.next  =  NULL;
/* Now traverse the list and print the elements */
	p = &n1;   /* point to 1st element */
	while (p != NULL)
	{
		printf ( ”\n %d %s %d”, p->roll,
		 p->name, p->age);
		p = p->next;
	}
}


}
