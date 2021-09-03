# include <stdio.h>

int main (void)
{
	int i ,j ,k;
	int cnt = 0;
	
	for(i=0;i<3;++i)
	{
		printf("111\n");   //3
		for(j=1;j<4;++j)
		{
		//	printf("222\n"); //12
			++cnt; 
		//	printf("3套循环次数；%d\n",cnt);
		    	
		//	printf("xixi\n") ;
		}
	//	printf("哈哈\n"); 
		
	}
	
	printf(" 循环次数；%d",cnt);
	return 0;
}//存疑，实验for无法三层嵌套 
