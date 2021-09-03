#include<stdio.h>

int  main()
{
	int n,m,i,j,sum=0,k;
	while(scanf("%d%d",&n,&m))//读取操作
	{    
		k=0;
	    for(i=1;i<=n/m;i++)//先将n个数分成i个组，每组m个
		{    
			sum=0;
			for(j=1;j<=m;j++)//将每个组里的数相加并求平均数
			{
				k=k+2;
				sum+=k;
			}
			printf("%-3d",sum/m);
		}
		
		if(n%m)
		{//分成i个组后剩余的数求平均数
			sum=0;
		    for(j=1;j<=n-n/m*m;j++)
			{
				k=k+2;
				sum+=k;
			}
			printf(" %d",sum/(j-1));
		}
		
		printf("\n");
	}
	
	return 0;
}	

