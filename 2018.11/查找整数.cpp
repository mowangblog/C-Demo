# include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,m; 
	for(i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(i=0;i<n;++i)
	{
		if(a[i]==m)
		{
			printf("%d",i+1);
			break;
		}
		if(i==n-1&&m!=a[i])
		{
			printf("-1");
		} 
	}
	return 0;
}
