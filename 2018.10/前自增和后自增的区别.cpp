# include <stdio.h>

int main (void)
{
	int i, j, k, m;
	i=j=3;
	
	k=++i;//k=4 
	m=j++;//�������Ǽ�һ֮ǰ��ֵ m=3 
	
	printf("i=%d,j=%d,k=%d,m=%d\n",i,j,k,m);
	
	
	return 0;
 } 
 //ǰ����������ʽ��ֵ��i+1֮���ֵ
 //������������ʽ��ֵ��i+1֮ǰ��ֵ 
