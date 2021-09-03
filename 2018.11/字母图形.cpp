# include <stdio.h>
int main ()
{
	char a[100]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[100]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	int i,j,m,n,k=0;
	scanf("%d %d",&n,&m);
	for(j=0;j<n;++j)
	{
		for(i=0;i<m;++i)
		{
			printf("%c",a[i]);
		}
		for(i=n-1;i>=0;--i)
		{
			a[i+1]=a[i]; 
		} 
		++k;
		if(k==26)
		{
			k=0;
		}
		a[0]=b[k];
		printf("\n");
	}
	return 0;
}
