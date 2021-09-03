# include <stdio.h>
int main()
{
	int n=1;
	double m=1;
	for(int i=2;i<=n;++i)
	{
		if(i%2==0)
		{
			m-=1.0/i;
		}
		else
		{
			m+=1.0/i;
		}
	}
	printf("%lf",m);
	
	return 0;
 } 
