# include <stdio.h>

int main(void)
{
	int i;
	int cnt = 0;
	
	for(i=1;i<=100;++i)
	{
		if(i%2==1)
		++cnt;
	}
	printf("奇数的个数为；%d",cnt);
	
	return 0;
 } 
 
