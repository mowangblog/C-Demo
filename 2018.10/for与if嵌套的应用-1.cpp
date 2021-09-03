# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	
	for(i=3;i<100;++i)
	{
		if(i%3==0)	
	    sum=sum+i;
    }
	printf("100以内能被3整除的数之和；%d",sum);    
	
	return 0;
} 
