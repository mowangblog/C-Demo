# include <stdio.h>

int main(void)
{
	int i;
	int k;
	printf("������Ӵ�С�����������ǽ���˳�����ֱ��������");
	scanf("%d %d",&i,&k);
	int sum = 0;
	
	for(i;i<=k;++i)
	    sum=sum+i;
	
	printf("sum=%d",sum);
	
	return 0; 
  }  
