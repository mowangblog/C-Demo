/***********
2018.11.28 lx
************/
# include <stdio.h>

int main()
{
	int a[30][5],i,j;
	float b[30],sum=0;
	
	printf("   ����30��ѧ����Ƴɼ���ƽ��ֵ��\n"); 
	for(i=0;i<30;++i)
	{
		printf("�������%dλѧ����5�Ƶĳɼ���",i+1); 
		for(j=0;j<5;++j)
		{
			scanf("%d",&a[i][j]); 
		}
	}
	
	for(i=0;i<30;++i)
	{
		for(j=0;j<5;++j)
		{
			sum+=a[i][j]; 
			b[i]=sum/5;
		}
		sum=0;
	}
	
	for(i=0;i<30;++i)
	{
		printf("��%d��ѧ����5��ƽ���ɼ���%.1f\n",i+1,b[i]);
	}
	return 0; 
}
