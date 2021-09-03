# include <stdio.h>

int main()
{
	int i; 
	for(i=1000;i>0;--i)
	{
		if(i%5==2&&i%7==3&&i%3==1)
		{
			printf("%d  ",i);
			break;
		}
		
	}
	
	
	
	return 0;
}
