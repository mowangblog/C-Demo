# include <stdio.h>

int f(int i)
{
	if(i==1)
	{
		return 1;
	}
	
	return i*f(i-1);
}

int main()
{
	int i,j;
	
	printf("%d",f(4));
	
	
	
	return 0;
}
