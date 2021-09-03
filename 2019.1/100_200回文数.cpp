# include <stdio.h>

int main()
{
	int i,a,b,c,n=0;
	for(i=100;i<200;++i)
	{
		a=i/1%10;
		b=i/10%10;
		c=i/100%10;
		if(a==c)
		{
			n+=i; 
		}
	}
	printf("%d",n);
	
	return 0;
}
