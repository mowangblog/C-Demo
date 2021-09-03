# include <stdio.h>

void sort(int s[],int start,int end)
{
 	int i,j;
 	i=start;
 	j=end;
 	s[0]=s[start];
 	
 	while(i<j)
 	{
 		while(i<j&&s[0]<s[j])
 			j--;
		if(i<j)
		{
			s[i]=s[j];
			i++;
		}
 		while(i<j&&s[i]<=s[0])
 			i++;	
		if(i<j)
		{
			s[j]=s[i];
			j--;
		}
	}
	s[i]=s[0];
	if(start<i)
	{
		sort(s,start,j-1);
	}
	if(i<end)
	{
		sort(s,j+1,end);
	}
	
 }
 
int main ()
{	
	int a[11],i;
		
	for(i=1;i<=10;++i)
	{
		printf("请输入十个数据："); 
		scanf("%d",&a[i]);
	 } 
	 printf("原始顺序：\n");
	for(i=1;i<=10;++i)
	{
		printf("%5d",a[i]);
	 } 
	 
	sort(a,1,10);
	
	printf("\n");
	printf("排序之后的顺序：\n");
	for(i=1;i<=10;++i)
	{
		printf("%5d",a[i]);
	} 
	
	return 0;
}
