# include <stdio.h>

int main(void)
{
	int val;
	
	printf("请输入楼层；");
	scanf("%d",&val);
	
	switch(val)
	{
	case 1:
	    printf("第一层开"); 
		break;	
	case 2: 
		printf("第二层开"); 
		break;
	default:
	    printf("没有此楼层");
		break;	
	 } 
	return 0;
}
 
