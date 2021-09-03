#include<stdio.h>
#include<math.h>

int main()
{
	int i,n;
	double s=0;
	long sum=0;
	printf("«Î ‰»În=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	if(i%3==0&&i%7==0)
	{
		sum+=i;
	}
	s=sqrt(sum);
	printf(" s=%f\n",s);

	return 0;	
} 
