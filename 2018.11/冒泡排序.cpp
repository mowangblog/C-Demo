# include <stdio.h>

void sort(int a[],int ten)
{
	int i,j,t;
	
	for(i=0;i<ten-1;++i)
	{
		for(j=0;j<ten-1-i;++j) //ȫд��tenҲ������ 
		{
			if(a[j]>a[j+1])//>����<���� 
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}

int main(void)
{
	int  a[3]; 
	int i;
	for(i=0;i<3;++i)
	{
		printf("������Ҫ�������:"); 
		scanf("%d",&a[i]);
	}
	sort(a,3);
	
	for(i=0;i<3;++i)
	{
		printf("%5d",a[i]);
	}

	return 0;
 } 
