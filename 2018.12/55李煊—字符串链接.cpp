/********
2018.12.17 �ö�ά��������Ŷ���ַ��������⣻ 
********/
 
# include <stdio.h> 
# include <string.h>

int main()
{
	int len,i;
	printf("��������Ҫ�����ַ����ĸ�����");
	scanf("%d",&len);
	getchar();
	char A[len][100];
	char B[len][100];
	
	char C[len][200];
	 
	for(i=0;i<len;++i)
	{
		printf("�����%d��Ҫ���ӵ��ַ��� ",i+1);
		printf("������A=");
		gets(A[i]);
		printf("������B="); 
		gets(B[i]);
		strcat(A[i],B[i]);
		strcpy(C[i],A[i]); 
	}
	
	for(i=0;i<len;++i)
	{
		printf("C.%d=%s\n",i+1,C[i]);
	}
	

	return 0;	
}
