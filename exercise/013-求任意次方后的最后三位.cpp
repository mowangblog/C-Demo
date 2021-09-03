# include <stdio.h>
int main()
{
	int x,y,n;
	int i;
	n=1;
	printf("请输入想x,y:"); 
	scanf("%d %d",&x,&y);//输入底数与幂数 
	for(i=1;i<=y;++i)
	{
		n=n*x%1000;  
	}
	if(n>=100)
	{
	printf("%d^%d的最后三位是%d",x,y,n);
	}
	else
	{
		printf("%d^%d的最后三位是0%d",x,y,n);
	}
	return 0;
}
