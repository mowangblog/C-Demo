# include <stdio.h>

int main()
{
	int n,i,m,sum=1;
	for(n=1;n<=5;++n)
	{
		for(i=1;i<=n;++i)
		{
			sum*=i;
		}
		m+=sum;
		sum=1;
	}
	printf("%d",m);
	
	return 0;
}
