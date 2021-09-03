# include <stdio.h>

int main(void)
{
	int i = 5;
	int j = 3;
	int t;
	
	t=i;
	i=j;
	j=t;
	
	printf("j=%d,i=%d",j,i);
	
	return 0;
}
//2018.10.4 
