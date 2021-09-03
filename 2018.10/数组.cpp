# include <stdio.h>

int main(void)
{
	int a[5]={1,2,3,4,5};
	int b[5];
	int i;
	for(i=0;i<5;++i)
	{
	    b[i] =a[i];
	    printf("%d\n",b[i]) ;
	}
	
	
	
	return 0;
 } 
