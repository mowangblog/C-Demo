# include <stdio.h>

int main()
{
	int num,a,b,c;
	for(num=200;num<300;++num)
	{
		a=num/1%10;
		b=num/10%10;
		c=num/100%10;
		if(a*b*c==42&&a+b+c==12)
		{
			printf("%5d",num);
		}
	}
	
	return 0;
 } 
