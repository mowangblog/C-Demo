# include <stdio.h>

int main()
{
	int n=5,m=10;
	for(int i=n;i>0;--i)
	{
		if(n%i==0&&m%i==0)
		{
			printf("%d ",i);
			break;
		}
	}
	
	
	
	return 0;
 } 
