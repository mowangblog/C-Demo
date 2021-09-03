# include <stdio.h>

int main()
{
	int i,j;
	for(i=0;i<7;++i)
	{
		for(j=0;j<7-i-1;++j)
		{
			printf(" ");
		}
		for(int n=0;n<2*i+1;++n)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	for(int k=i-1;k>0;--k)
	{
		for(j=0;j<i-k;++j)
		{
			printf(" ");
		}
		for(int n=0;n<k*2-1;++n)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	
	
} 
