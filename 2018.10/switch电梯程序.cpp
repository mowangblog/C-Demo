# include <stdio.h>

int main(void)
{
	int val;
	
	printf("������¥�㣻");
	scanf("%d",&val);
	
	switch(val)
	{
	case 1:
	    printf("��һ�㿪"); 
		break;	
	case 2: 
		printf("�ڶ��㿪"); 
		break;
	default:
	    printf("û�д�¥��");
		break;	
	 } 
	return 0;
}
 
