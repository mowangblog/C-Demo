# include <stdio.h>
int main()
{
	int i,j,k,l,n;
	for(i=0;i<2;++i)
	{
		for(j=0;j<2;++j)
		{
			for(k=0;k<2;++k)
			{
				for(l=0;l<2;++l)
				{
					for(n=0;n<2;++n) 
					{
						printf("%d%d%d%d%d\n",i,j,k,l,n);
					}
				}
			} 
		}
	}
	
	
	
	return 0;
 } 
