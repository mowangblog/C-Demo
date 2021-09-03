# include <stdio.h>

int main(void)
{
	float i;
	float sum = 0;
	
	for(i=1;i<=100;++i)
	    sum=sum+1/i;
	    
	printf("sum=%f",sum);
	
	
	return 0;
 } // 本程序不对，因为循环中更新的变量不能被定义成浮点型； 
