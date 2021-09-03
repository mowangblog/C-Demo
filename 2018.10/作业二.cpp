# include <stdio.h>

int main(void)
{
	int i = 8;
	int j = 1;
	
	while(i>1)
	{
	    while(j<i)
	    {
		   j++;
	       printf("*"); 
        }
       i=i-2;
 
    }
	
	return 0;
 } 
