# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	int cnt = 0;
	float avg;
	
	for(i=1;i<101;++i)
	{
	    
		if(i%2==1)
	   {
		   sum+=i;
		   ++cnt;	
	   }
		
	}    
	avg=1.0*sum/cnt;
	printf("奇数的平均值是；%f",avg) ; 
	
	return 0;
 } 
