# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	
	for(i=3;i<100;++i)
	{
		if(i%3==0)	
	    sum=sum+i;
    }
	printf("100�����ܱ�3��������֮�ͣ�%d",sum);    
	
	return 0;
} 
