# include <stdio.h>

int main (void)
{
	int i;
	int  sum1 = 0;//������ 
	int  sum2 = 0;//ż���� 
	
	for(i=1;i<101;++i)
	 {
	 	if(i%2==1)
	 	   sum1+=i;
	 	   
	 	else
		   sum2+=i;   
	 }
	 
	printf("�������ǣ�%d\n",sum1);
	printf("ż�����ǣ�%d",sum2);
	
	return 0; 
 } 
