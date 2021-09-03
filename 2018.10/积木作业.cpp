# include <stdio.h>

int main(void)
{
	int i,j;
	
    for(i=8;i>1;i=i-2)	 
	{
       for(j=1;j<i;j++)
	    {
		      printf("*");
        }
        printf(" \n") ;
    }
	
	return 0;
 } 
