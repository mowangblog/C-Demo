# include <stdio.h>

int main(void)
{
	int a[3][4] = {
	         {1,2,3,4}, 
			 {5,6,7,8},    
	         {9,10,11,12}
	}; 
	
	int i;
	int j;
	
	for(i=0;i<3;++i)
	{
		for(j=0;j<4;++j)
		printf("%-5d",a[i][j]);
		
		printf("\n");
	}
	return 0;
 } 
