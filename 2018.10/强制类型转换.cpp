# include <stdio.h>
 
int main(void)
{
	int i;
	float sum = 0;
	
	for(i=1;i<=100;++i)
	    sum=sum+1.0/i;  //推荐的写法 
	    //sum=sum+(float)(1/i); 这是不对的
		//sum=sum+1/(float)(i); 不推荐 
	    
	printf("sum=%f",sum);
	
	return 0;
}
/*
该程序求1+1/2+1/3+1/4.....+1/100的值 

*/ 
