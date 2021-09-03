/***********
2018.11.28 lx
************/
# include <stdio.h>

int main()
{
	int a[30][5],i,j;
	float b[30],sum=0;
	
	printf("   计算30个学生五科成绩的平均值。\n"); 
	for(i=0;i<30;++i)
	{
		printf("请输入第%d位学生的5科的成绩：",i+1); 
		for(j=0;j<5;++j)
		{
			scanf("%d",&a[i][j]); 
		}
	}
	
	for(i=0;i<30;++i)
	{
		for(j=0;j<5;++j)
		{
			sum+=a[i][j]; 
			b[i]=sum/5;
		}
		sum=0;
	}
	
	for(i=0;i<30;++i)
	{
		printf("第%d个学生的5科平均成绩是%.1f\n",i+1,b[i]);
	}
	return 0; 
}
