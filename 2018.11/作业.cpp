# include <stdio.h>

float f(int *p,int len)
{
	int i;
	float sum=0;
	
	for(i=0;i<len;++i)
	{	
		printf("������Ҫ��ȡƽ��ֵ������ps����%d��,����%d������",len,len-i); 
		scanf("%d", &*(p+i) );
	} 
	
	for(i=0;i<len;++i)
	{
		sum=*(p+i)+sum;
	}
	
	printf("ƽ��ֵ��%f",sum/len);
	
}

int main()
{
	int i; 
	printf("��������Ҫ��ƽ�����ĸ�����"); 
	scanf("%d",&i);
	int a[i];

	f(a,i);
	
	return 0;
 } 
