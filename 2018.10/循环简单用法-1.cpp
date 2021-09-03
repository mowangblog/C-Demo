# include <stdio.h>

int main(void)
{
	int i;
	int k;
	printf("请输入从大到小两个数，它们将以顺序相加直到大数；");
	scanf("%d %d",&i,&k);
	int sum = 0;
	
	for(i;i<=k;++i)
	    sum=sum+i;
	
	printf("sum=%d",sum);
	
	return 0; 
  }  
