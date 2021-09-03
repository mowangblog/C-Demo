# include <stdio.h>
int main()
{
	int j,n;
	scanf("%d",&n);
	int a[n][n],i;
	for(i=0;i<n;++i)
	{
		for(j=0;j<=i;++j)
		{   
			if(j==0||i==j)
			{
				a[i][j]=1;
			}
			else 
			{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
		}
	}
	for(i=0;i<n;++i)
	{
		for(j=0;j<=i;++j)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
