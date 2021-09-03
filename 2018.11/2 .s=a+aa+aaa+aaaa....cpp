# include <stdio.h>

int main ()
{
	int a,n,i; 
	long int s=0;
	long int sum=0;
	
	printf("  求s=a+aa+aaa+aaaa+...\n");
	printf("请输入a,n的值(a<1000):"); 
	scanf("%d %d",&a,&n);
	if(a<10)
	{ 
		for(i=0;i<a;++i)
		{
			sum=sum*10+a;
			s+=sum;
		}
	} 
	else if(a>=10&&a<100)
	{
		for(i=0;i<n;++i)
		{
			sum=sum*100+a;
			s+=sum;
		}
	} 
	else 
	{
		for(i=0;i<n;++i)
		{
			sum=sum*1000+a;
			s+=sum;
		}	
	}
	printf("s=%d",s);
	
	return 0;	
} 
