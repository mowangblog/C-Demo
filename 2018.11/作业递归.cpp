# include <stdio.h>

int main ()
{
	int i;
	for(i=1;i<=101;++i)
	{
		if(i%2==1)
		{
			printf("%-5d",i);
		}
	}
	
	return 0;
 } 
