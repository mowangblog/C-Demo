# include <stdio.h>
 
int main(void)
{
	int i;
	float sum = 0;
	
	for(i=1;i<=100;++i)
	    sum=sum+1.0/i;  //�Ƽ���д�� 
	    //sum=sum+(float)(1/i); ���ǲ��Ե�
		//sum=sum+1/(float)(i); ���Ƽ� 
	    
	printf("sum=%f",sum);
	
	return 0;
}
/*
�ó�����1+1/2+1/3+1/4.....+1/100��ֵ 

*/ 
