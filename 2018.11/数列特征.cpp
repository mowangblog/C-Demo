# include <stdio.h> 
int main ()
{
	int n,t,i,j;
	long long sum=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	for(i=0;i<n-1;++i)
	{
		for(j=0;j<n-i-1;++j)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("%d\n",a[n-1]);
	printf("%d\n",a[0]);
	printf("%I64d",sum);
	return 0;
}
