# include <stdio.h>

int main()
{
	float n,m,m2;
	scanf("%f %f",&n,&m);
	if(n>20)
	{
		m2=5*1.05+5*1+5*0.95+5*0.9+(n-20)*0.85;
		printf("应付%.1f,应找%.1f\n",m2,m-m2);
	}
	else if(n>15)
	{
		m2=5*1.05+5*1+5*0.95+(n-15)*0.9;
		printf("应付%.1f,应找%.1f\n",m2,m-m2);
	}
	else if(n>10)
	{
		m2=5*1.05+5*1+(n-10)*0.95;
		printf("应付%.1f,应找%.1f\n",m2,m-m2);
	}
	else if(n>5)
	{
		m2=5*1.05+(n-5)*1;
		printf("应付%.1f,应找%.1f\n",m2,m-m2);
	}
	else if(n<=5) 
	{
		m2=n*1.05; 
		printf("应付%.1f,应找%.1f\n",m2,m-m2);
	}
	
	return 0;
}
