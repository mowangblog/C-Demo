# include <stdio.h>

int main()
{
	int i;
	float n=100,m=0,sum=0;
	for(i=1;i<10;++i)
	{
		m=n/2;
		sum+=(m*2);
		n=m;
	}
	
	printf("%f\n",sum+100);
	printf("%f",n);
	
	return 0;
 } 
