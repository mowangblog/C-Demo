# include <stdio.h>

int main(void)
{
	int val;
	int m ;
	int sum = 0;
	printf("������Ҫ�ж��Ƿ�����ֵ����֣�"); 
	scanf("%d",&val);
	
	m=val;  
	while  (m)    //mҪ�ȸ�ֵ    ��m=val;m;m/10)        
	{
	  sum=sum*10+m%10;    //m%10=   m����10������ 
	  m/=10;     //m=m/10
	} 
	if (sum == val)
	   printf("yes");
	else  
	   printf("no"); 
	
	return 0;
 } 
