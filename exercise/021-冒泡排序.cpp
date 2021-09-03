# include <stdio.h>
int main ()
{
	int i,t,j;
	int a[10];
	for(i=0;i<10;++i)
	{
		printf("«Î ‰»Î£∫"); 
		scanf("%d",&a[i]);
	 } 
	for(i=0;i<=10-1;++i)
	{
		for(j=0;j<=10-1-i;++j)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("≈≈–Ú∫Û£∫\n");
	for(i=0;i<10;++i)
	{
		printf("%5d",a[i]);
	}
	
	return 0;
 } 
