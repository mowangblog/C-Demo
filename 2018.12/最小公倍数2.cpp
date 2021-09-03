# include <stdio.h>

int main()
{
	int i,j,n,m,t;
	scanf("%d%d",&n,&m);
	if(m<n)
	{
		t=n;
		n=m;
		m=t;
	}
	for(i=m;i>0;++i)
	{
		if(i%m==0&&i%n==0)
		{
			printf("%d",i);
			break;
		}
	}
	
	return 0;
}
