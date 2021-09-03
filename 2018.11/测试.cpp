# include <stdio.h>
# include <stdlib.h> 

struct student
{
	int i;
};

void f(struct student *p)
{
	scanf("%d",&p[1]);
	
	
}
int main ()
{
	struct student *p; 
	p=(struct student *)malloc(2*sizeof(struct student));
	f(p);
	printf("%d",p[1].i);
	
	return 0;
}
