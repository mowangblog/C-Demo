# include <stdio.h>
int main ()
{
	int i,n;
	float fac=1;
	printf("������Ҫ�������") ; 
	scanf("%d",&n);
	
	if(n==0&&n==1)
	{
		printf("factorial is 1");
		return 0;
	}
	for(i=2;i<=n;++i)
	{
		fac=fac*i;
	}
	printf("factorial of %d is %f",n ,fac);
	return 0;
}
//�׳ˣ�1*2*3*4*5*6*7*8*9*10=10�� 
