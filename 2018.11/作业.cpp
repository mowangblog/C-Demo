# include <stdio.h>

float f(int *p,int len)
{
	int i;
	float sum=0;
	
	for(i=0;i<len;++i)
	{	
		printf("请输入要求取平均值的数（ps：共%d个,还有%d个）：",len,len-i); 
		scanf("%d", &*(p+i) );
	} 
	
	for(i=0;i<len;++i)
	{
		sum=*(p+i)+sum;
	}
	
	printf("平均值是%f",sum/len);
	
}

int main()
{
	int i; 
	printf("请输入你要求平均数的个数："); 
	scanf("%d",&i);
	int a[i];

	f(a,i);
	
	return 0;
 } 
