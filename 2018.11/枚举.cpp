# include <stdio.h>

enum liu
{
	tao,yu,xuan,jun
	
};

void f(enum liu i)
{

	switch(i)
		{
		
		case 0:
			printf("����");
			break;
		case 1:
			printf("����");
			break;
		case 2:
			printf("����");
			break;
		case 3:
			printf("����"); 
		}
}

int main ()
{
	//enum liu i;
	//scanf("%d",&i);
	
	f(tao);
	
	return 0;
}
