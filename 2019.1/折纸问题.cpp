# include <stdio.h>

int main()
{
	double n=0.0005;
	int m;
	for(int i=1;i>0;++i)
	{
		n=n*2;
		++m;
		if(n>8844.43) 
		{
			printf("%d´Î\n",m);
			break;
		}
	}
	
	return 0;
}
