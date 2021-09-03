# include <stdio.h>
int main ()
{
	int day;
	int x = 1;
	
    for(day=9;day>0;--day)
    {
    	x=(x+1)*2;	 
	}
	printf("the total is %d",x);
	return 0;
 } 
