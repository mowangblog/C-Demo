# include <stdio.h>
int main()
{
	int x,y,n;
	int i;
	n=1;
	printf("��������x,y:"); 
	scanf("%d %d",&x,&y);//������������� 
	for(i=1;i<=y;++i)
	{
		n=n*x%1000;  
	}
	if(n>=100)
	{
	printf("%d^%d�������λ��%d",x,y,n);
	}
	else
	{
		printf("%d^%d�������λ��0%d",x,y,n);
	}
	return 0;
}
