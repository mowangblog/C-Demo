# include <stdio.h>

int main()
{
	float m,n;
	int sum;
	scanf("%f %d",&m,&sum);
	if(m<=10)
	{
		n=sum*m*0.9;
		printf("%.1f",n);
	}
	else if(m>10&&m<=100)
	{
		n=sum*m*0.85;
		printf("%.1f",n);
	}
	else
	{
		n=sum*m*0.8;
		printf("%.1f",n);
	}
	
	
	return 0;
 } 
