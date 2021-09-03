#include<stdio.h>

int main()
{
	int a[20];
	int n;
	scanf("%d",&n);
	a[0]=0;
	a[1]=1;
	if(n==1)
	{
		printf("Fibonacci=0\n");
	}
	else if(n==2)
	{
		printf("Fibonacci=0\n");
		printf("Fibonacci=1\n");
	}
	else if(n>=2)
	{
		printf("Fibonacci=0\n");
		printf("Fibonacci=1\n");
			for(int i=2;i<n;i++)
		{
			a[i]=a[i-1]+a[i-2];
			printf("Fibonacci=%d\n",a[i]);
		}
	}

	
	return 0;
}
