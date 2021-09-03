# include <stdio.h> 

void f(float *p,int len)
{
	int i;
	float sum=0;
	
	for(i=0;i<len;++i)
	{
		printf("请输入要求取平均值的的数：（还有%d个）",len-i);
		scanf("%f",&*(p+i));
	}
	
	for(i=0;i<len;++i)
	{
		sum = sum + *(p+i); 
	}
	
	printf("平均数是%f\n",sum/len);	
	
}

int main ()
{ 
	int len;
	
	printf("请输入你要求平均值的个数："); 
	scanf("%d",&len);
	
	float a[len];
	f(a,len);
	
	return 0;
}
