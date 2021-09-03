# include <stdio.h>//1 2 3 5 8 13 21 34

int main(void)
{
	int n,i;
	int f1,f2,f3;
	
	printf("«Î ‰»Î–Ú¡–£ª"); 
	scanf("%d",&n);
	
	f1=1;
	f2=2;
	
	if(n == 1)
	{
		f3 = 1;
	}  
	else if(n == 2)
	{
		f3 = 2;
	}
	else
	{
	    for(i=3;i<=n;++i)	 
		 {
	    	f3 = f2+f1;
	    	f1 = f2;
	   	    f2 = f3;
         }
    }
	printf("%d",f3);
	
	return 0;
 } 
