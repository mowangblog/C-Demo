# include <stdio.h>

void insort(int s[],int n)
{
	int i,j;
	for(i=2;i<=n;++i)
	{
		s[0]=s[i];
			j=i-1;
			
			while(s[0]<s[j])
		{
			s[j+1]=s[j];
			--j;
		}
		s[j+1]=s[0];
	}

}

int main()
{
	int a[11],i;
	
	for(i=1;i<11;++i)
	{
		printf("请输入10个数据：");
		scanf("%d",&a[i]);
	} 
	
	printf("原始顺序：\n"); 
	
	for(i=1;i<11;++i)
	{
		printf("%5d",a[i]); 
	}
	
	insort(a,10);
	
	printf("\n");
	printf("插入数据排序后的顺序：\n");
	
	for(i=1;i<11;++i)
	{
		printf("%5d",a[i]);			
	} 	
	return 0;
}

