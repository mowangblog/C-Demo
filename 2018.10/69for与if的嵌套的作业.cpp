# include <stdio.h>
 
int main(void)
{
	int i,p;
	int k = 0;
	int sum = 0;
	
	for(i=1;i<=100;i+=2)
	{
	    sum=sum+i; 
	    ++k; 
	}
    printf("100以内奇数的个数为；%d\n",k); 
    printf("100以内奇数和为；%d\n",sum);
	    
    p=sum/k;
    printf("100以内奇数平均值为；%d\n",p);
    
    sum=0;
	    
	for(i=0;i<=100;i+=2) 
	    sum=sum+i;
		
	printf("100以内偶数和为；%d\n",sum);   
	
	return 0;
  }  
