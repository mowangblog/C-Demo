# include <stdio.h>

int main ()
{
	int a,n,i; 
	long int s=0;
	long int sum=0;
	
	printf("  ��s=a+aa+aaa+aaaa+...\n");
	printf("������a��ֵ(a<10):"); 
	scanf("%d",&a);

	for(i=0;i<a;++i)
	{
		sum=sum*10+a;
		printf("%d ",sum);
		s+=sum;
	}
	
	printf("s=%d",s);
	
	return 0;	
} 
