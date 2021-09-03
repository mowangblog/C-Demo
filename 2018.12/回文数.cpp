# include <stdio.h>
int main ()
{
	int i,a,b,c,d;
	for(i=1000;i<10000;++i)
	{
		a=i/1%10;
		b=i/10%10;
		c=i/100%10;
		d=i/1000%10;
		if(a==d&&c==b)
		{
			printf("%d\n",i);
		}
	}
	return 0;
 } 
