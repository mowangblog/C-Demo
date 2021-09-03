# include <stdio.h>

int main(void)
{
	int i = 0;
	int sum = 0;
	
	while(i<=100)
	{
		sum+=i;//sum = sum + i; 
		++i;
	}
	
	printf("sum=%d\n",sum); 
	
	return 0;
 } 
 //1+2+3+.....+100µÄ¼ÆËã 
