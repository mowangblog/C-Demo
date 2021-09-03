#include<stdio.h>
int main()
{
	int i,j,t;
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	for(i=0;i<10;i++)
	{
		for(j=0;j<10-i;j++)
		{
			if(a[j]>a[j+1])
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
		}
	}
	for(i=0;i<10;i++)
	printf("%d\n",a[i]);
	return 0;
}
