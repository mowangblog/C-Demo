#include<stdio.h>

int  main()
{
	int n,m,i,j,sum=0,k;
	while(scanf("%d%d",&n,&m))//��ȡ����
	{    
		k=0;
	    for(i=1;i<=n/m;i++)//�Ƚ�n�����ֳ�i���飬ÿ��m��
		{    
			sum=0;
			for(j=1;j<=m;j++)//��ÿ�����������Ӳ���ƽ����
			{
				k=k+2;
				sum+=k;
			}
			printf("%-3d",sum/m);
		}
		
		if(n%m)
		{//�ֳ�i�����ʣ�������ƽ����
			sum=0;
		    for(j=1;j<=n-n/m*m;j++)
			{
				k=k+2;
				sum+=k;
			}
			printf(" %d",sum/(j-1));
		}
		
		printf("\n");
	}
	
	return 0;
}	

