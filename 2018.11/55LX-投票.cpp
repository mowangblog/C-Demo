/*********************************
	投票  
	
	用 for 循环和 if 语句累加票数 
	平局用 if 语句直接输出 
	max函数判断获胜者。
	
    2018.11.22 
**********************************/

# include <stdio.h>

int max(int a,int b,int c)
{
	if(a>b&&a>c)
	{
		return 97;
	}
	else if(b>a&&b>c)
	{
		return 98;
	}
	else if(c>a&&c>b)
	{
		return 99;
	}
	else 
	{
		return 0;
	}
}

int main ()
{
	int i,number;
	int a=0,b=0,c=0;
	
	printf("请输入投票的人数："); 
	scanf("%d",&number);
	
	int s[number];
	
	printf("请输入投票结果(1-a;2-b;3-c):");
	for(i=0;i<number;++i)
	{
		scanf("%d",&s[i]);
	}
	
	for(i=0;i<number;++i)
	{
		if(1==s[i])
		{
			++a;
		}
		else if(2==s[i])
		{
			++b;
		}
		else
		{
			++c;
		}
	}
	printf("a同学票数：%d,b同学票数：%d，c同学票数：%d \n",a,b,c);
	printf("\n"); 
	
	if(max(a,b,c)==0)
	{
		printf("  平票  ");
	}
	else
	{
		printf("获胜者是：%c同学",max(a,b,c));
	}
	
	return 0; 
} 
