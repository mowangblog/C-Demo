# include <stdio.h>

int f(int n)
{
	if(1==n)
	{
		return 1;
	}
	else
	{
		return n+f(n-1);
	}
}


int main()
{
	printf("%d\n",f(100)); 
	
	return 0;
 } 
