# include <stdio.h>
# include <string.h>

struct Student
{
	int sid;
	char name[100];
	int age;	
};

void f(struct Student *);
void n(struct Student *);
int main()
{
	struct Student st;
	f(&st);
	n(&st);
	return 0;
}

void f(struct Student *pst)
{
	pst->sid=99;	
	strcpy(pst->name,"ÀîÐù");
	pst->age=18; 
}

void n(struct Student *pst )
{
	printf("%d  ",pst->sid);
	printf("%s  ",pst->name);
	printf("%d  ",pst->age);
	
}
