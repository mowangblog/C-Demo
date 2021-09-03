# include <stdio.h>

int main()
{
	int a[10]={1,3,434,54,54,54,3,43,34,2};
	int i,j,t;
	for(i=0;i<10;++i)
	{
		for(j=i+1;j<10-1;++j)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<10;++i)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
 } 
