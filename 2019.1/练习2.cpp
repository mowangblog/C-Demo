# include <stdio.h>

int main()
{
	int x,y,z;
	for(x=1;x<=10;++x)
	{
		for(y=1;y<=10;++y)
		{
			for(z=1;z<=10;++z)
			{
				if((x*100+y*10+z)+(y*100+z*10+z)==532)
				{
					printf("%d  %d  % d",x,y,z);
					break;
				}
			}
		}
	 } 
	
	
	
	return 0;
}
