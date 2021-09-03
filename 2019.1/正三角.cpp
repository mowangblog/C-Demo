# include <stdio.h>

int main()
{
	int i,j;
	for(i=0;i<10;++i)
	{
		for(j=0;j<10-i-1;++j)
		{
			printf(" ");
		}
		for(int n=0;n<2*i+1;++n)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	
	
	
} 
