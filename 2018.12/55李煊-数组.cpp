/***********
2018.11.28 lx
************/

# include <stdio.h>

int main ()
{
	int i,j,a[10][10];
	for(i=0;i<10;++i)
	{
		for(j=0;j<i;++j)
		{
			a[i][j]=i+j;
			printf("%3d",i+j);
		}
		printf("\n"); 
	}
	
	for(i=0;i<10;++i)
	{
		for(j=0;j<i;++j)
		{
			printf("%3d",a[i][j]); 
		}
		printf("\n");
	}
	
	return 0;
 } 
