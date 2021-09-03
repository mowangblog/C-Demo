# include <stdio.h>
# include <string.h>

typedef struct Student
{
	int sid;
	char name[100];
	int age;	
}*PST,ST;

int main()
{
	ST st;
	st.age=99;
	PST ps=&st;
	ps->sid=80;
	strcpy(ps->name,"ÀîÐþ");
	printf("%d %d %s",ps->sid,ps->age,ps->name); 
	
	
	
	return 0;
}
