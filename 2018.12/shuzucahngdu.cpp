# include<stdio.h>

int f(int * a)
{
	int len=0;
	while(1)
	if(*a!=NULL)
	{
		++a;
		++len;
	}
	else
	{
		break;
	}
	return len;
}
int main()
{
	int a[10]={1,2,3,4}; 
	printf("%d",f(a));
	
	return 0;
 } 
