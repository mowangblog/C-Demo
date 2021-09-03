# include <stdio.h>

int main()
{
	int month,sum;
	scanf("%d %d",&month,&sum);
	if(month<=5||month==10||month==11)
	{
		if(sum>20)
		{
			printf("优惠30%"); 
		}
		else if(sum<=20)
		{
			printf("优惠20%"); 
		}
	}
	else if(month>=7&&month<=9)
	{
		if(sum>20)
		{
			printf("优惠15%"); 
		}
		else
		{
			printf("优惠5%"); 
		}
	}
	else
	{
		printf("优惠10%"); 
	}
	
	
	return 0;
}
