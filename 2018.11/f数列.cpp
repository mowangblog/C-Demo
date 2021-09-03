# include <stdio.h>
int f(int n)
{
	if(n==1||n==2)
	{
		return 1;
	}
	else 
		return f(n-1)+f(n-2);
}
int main()
{
	int n=0;
	scanf("%d",&n);
	
	printf("%d",f(n));

	return 0;
 } 
