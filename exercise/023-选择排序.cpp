# include <stdio.h>

int main ()
{
	int i,j,t,a[11];
	
	for(i=1;i<=10;++i)
	{
		printf("������ʮ�����ݣ�");
		scanf("%d",&a[i]); 
	}
	
	for(i=1;i<=9;++i)
	{
		for(j=i+1;j<=10;++j)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	
	printf("������˳��");
	for(i=1;i<=10;++i)
	{
		printf("%6d",a[i]);
	} 
 
	return 0;
} 
