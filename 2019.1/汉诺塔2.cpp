# include <stdio.h>

void hannuota(int n,char A,char B,char C)
{
	if(1==n)
	{
		printf("��%d�����д�%c�Ƶ�%c\n",n,A,C);
	}
	else
	{
		hannuota(n-1,A,C,B);
		printf("��%d�����д�%c�Ƶ�%c\n",n,A,C);
		hannuota(n-1,B,A,C);
	}
}

int main()
{
	hannuota(3,'A','B','C');
	
	
	
	return 0;
 } 
