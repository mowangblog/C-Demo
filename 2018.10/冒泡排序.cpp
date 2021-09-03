# include <stdio.h>

int main()
{
	int b[]={25,24,12,76,101,96,28};
	int i,j,t;
	for(i=0;i<7;++i)
	{
		for(j=i+1;j<7;++j)
		{
			if(b[i]>b[j])
			{
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
	for(i=0;i<7;++i)
	{
		printf(" %d",b[i]);
	}
	return 0;
}
