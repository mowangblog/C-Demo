# include <stdio.h> 

void f(float *p,int len)
{
	int i;
	float sum=0;
	
	for(i=0;i<len;++i)
	{
		printf("������Ҫ��ȡƽ��ֵ�ĵ�����������%d����",len-i);
		scanf("%f",&*(p+i));
	}
	
	for(i=0;i<len;++i)
	{
		sum = sum + *(p+i); 
	}
	
	printf("ƽ������%f\n",sum/len);	
	
}

int main ()
{ 
	int len;
	
	printf("��������Ҫ��ƽ��ֵ�ĸ�����"); 
	scanf("%d",&len);
	
	float a[len];
	f(a,len);
	
	return 0;
}
