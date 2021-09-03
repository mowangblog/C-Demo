# include <stdio.h>

int main()
{
	int i,j,flag,t=97,ft=0;
	for(i=101;i<1000;i+=2)
	{
		flag=1;
		for(j=2;j<i;++j)
		{
			if(i%j==0)
			{
				flag=0;	
				break;
			}	
		}
		if(flag==0)
		{
			if(i-t==2)
			{
				if(ft==0)
				{
					printf("i=%d,½ãÃÃ=%d\n",i,i-2);
					ft=1;
				}
			}
			else
			{
				ft=0;
			}
			t=i;
		}
	}
	
	return 0;
}
