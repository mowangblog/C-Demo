# include <stdio.h>

int main()
{
	int month,sum;
	scanf("%d %d",&month,&sum);
	if(month<=5||month==10||month==11)
	{
		if(sum>20)
		{
			printf("�Ż�30%"); 
		}
		else if(sum<=20)
		{
			printf("�Ż�20%"); 
		}
	}
	else if(month>=7&&month<=9)
	{
		if(sum>20)
		{
			printf("�Ż�15%"); 
		}
		else
		{
			printf("�Ż�5%"); 
		}
	}
	else
	{
		printf("�Ż�10%"); 
	}
	
	
	return 0;
}
