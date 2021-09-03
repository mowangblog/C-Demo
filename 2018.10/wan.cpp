# include <stdio.h>

int main(void)
{
	int i,k;
	printf("欢迎来到澳门皇冠赌场，请选择娱乐项目：\n");
//	scanf("%d",k);
	printf("1,斗地主\n");
	printf("2,百家乐\n");
	printf("3,二十一\n");
	printf("4,更多\n");
	scanf("%d",&k);
	printf("抱歉，我们需要先确定的年龄。"); 
	printf("请输入你的年龄；");
	scanf("%d",&i);
	if(i<18)
	{
		printf("十八岁以下禁止入内");
	 } 
	else if(i>100)
	{
		printf("老人家回去吧");
	}
	else 
	{
		printf("请选择娱乐项目："); 
	}
	printf("1,斗地主");
	printf("2,百家乐");
	printf("3,二十一");
	printf("4,更多");
	scanf("%d",&k);
	printf("抱歉，请先充值"); 
	switch(k)
	{
		case 1:
			printf("抱歉，请先充值"); 
		
		
		
	}
	
	
	
	return 0;
}
