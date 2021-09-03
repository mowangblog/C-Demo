#include<stdio.h>
int   main()
{
	int i,j,t;
	int a[5];
	for(i=0;i<5;++i)
	{
		printf("ÇëÊäÈë£º");
		scanf("%d",&a[i]);
	}	
	
	
	for(i=0;i<=5-1;++i)
	{
		for(j=0;j<=5-1-i;++j)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1]; 
				a[j+1]=t;
			}
		}
	 } 
	
for(i=0;i<5;++i)
	{
		printf("%6d\n",a[i]);
		
	}
}
