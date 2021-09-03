# include <stdio.h>
int main ()
{
	int n,day;
	float money;
	float ave;
	n=2;
	day = 0; 
	
	while(n<100)
	{
		money+=0.8*n;
		day++;
		n*=2;
	}
	ave = money/day;
	printf(" the result is %f ",ave);
	return 0;
}
//没做出来 2018.11.07 
