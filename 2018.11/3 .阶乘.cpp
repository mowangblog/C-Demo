# include <stdio.h>

int f(int n)
{
	int i,sum=1;
	
	if(1==n)
	{
		return 1;
	}
	
	for(i=2;i<=n;++i)
	{
		sum*=i;
	}	
		
	return sum;
}

int main ()
{
	int n,sum=0;
	
	printf("求1+2！+3！+4！+...n!\n");
	printf("请输入n的值:");
	scanf("%d",&n);
	
	for(n;n>=1;--n)
	{
		printf("%d!=%d    ",n,f(n)); 
		sum+=f(n);
	}
	
	printf("\n");
	printf("求1+2！+3！+4！+...n!=");
	printf("%d\n",sum);
	
	return 0;
 } 
