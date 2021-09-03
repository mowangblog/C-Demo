# include <stdio.h>

int main()
{
	float i,t,m,n,sum=0;
	n=1.0;
	m=2.0;
	for(i=0;i<20;++i)
	{
		sum+=m/n;
		t=m;
		m=m+n;
		n=t; 
	}
	printf("%.1f",sum);
	
	return 0;
}
 
