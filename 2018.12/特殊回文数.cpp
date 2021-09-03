# include <stdio.h>
int main()
{
	int a,b,c,d,e,f;
	int m,val;
	scanf("%d",&val);
	for(m=10000;m<1000000;++m)	
	{
		a=m/1%10;
		b=m/10%10;
		c=m/100%10;
		d=m/1000%10; 
		e=m/10000%10;
		f=m/100000%10;
		if(a==f&&b==e&&c==d)
		{
			if(val==a+b+c+d+e+f)
			printf("%d\n",m);
		}
		else if(a==e&&b==d&&f==0)
		{
			if(val==a+b+c+d+e+f)
			printf("%d\n",m);
		}
	
	}

	return 0;
}
