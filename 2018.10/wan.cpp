# include <stdio.h>

int main(void)
{
	int i,k;
	printf("��ӭ�������Żʹڶĳ�����ѡ��������Ŀ��\n");
//	scanf("%d",k);
	printf("1,������\n");
	printf("2,�ټ���\n");
	printf("3,��ʮһ\n");
	printf("4,����\n");
	scanf("%d",&k);
	printf("��Ǹ��������Ҫ��ȷ�������䡣"); 
	printf("������������䣻");
	scanf("%d",&i);
	if(i<18)
	{
		printf("ʮ�������½�ֹ����");
	 } 
	else if(i>100)
	{
		printf("���˼һ�ȥ��");
	}
	else 
	{
		printf("��ѡ��������Ŀ��"); 
	}
	printf("1,������");
	printf("2,�ټ���");
	printf("3,��ʮһ");
	printf("4,����");
	scanf("%d",&k);
	printf("��Ǹ�����ȳ�ֵ"); 
	switch(k)
	{
		case 1:
			printf("��Ǹ�����ȳ�ֵ"); 
		
		
		
	}
	
	
	
	return 0;
}
