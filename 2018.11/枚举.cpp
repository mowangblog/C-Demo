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
			printf("³ÂÌÎ");
			break;
		case 1:
			printf("ÕñÓî");
			break;
		case 2:
			printf("ÀîĞù");
			break;
		case 3:
			printf("Ïş¾ı"); 
		}
}

int main ()
{
	//enum liu i;
	//scanf("%d",&i);
	
	f(tao);
	
	return 0;
}
