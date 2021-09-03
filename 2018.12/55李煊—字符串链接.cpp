/********
2018.12.17 用二维数组解决存放多个字符串的问题； 
********/
 
# include <stdio.h> 
# include <string.h>

int main()
{
	int len,i;
	printf("请输入你要链接字符串的个数：");
	scanf("%d",&len);
	getchar();
	char A[len][100];
	char B[len][100];
	
	char C[len][200];
	 
	for(i=0;i<len;++i)
	{
		printf("输入第%d个要连接的字符串 ",i+1);
		printf("请输入A=");
		gets(A[i]);
		printf("请输入B="); 
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
