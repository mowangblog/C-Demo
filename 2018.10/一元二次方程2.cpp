# include <stdio.h>
# include <math.h>

int main(void)
{
	int a;
	int b;
	int c;
	printf("������a,b,c��ֵ��"); 
	scanf("%d %d %d",&a,&b,&c);
	double delta;
	double x1;
	double x2;
	
	delta = b*b - 4*a*c;
	
	if (delta > 0)
	{
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		printf ("��һԪ���η����������⣬x1 = %f  , x2 = %f\n",x1,x2);	
	}
	else if (delta == 0)
	{
		x1 = (-b) / (2*a);
		x2 = x1;
		printf ("��һԪ���η�����һ��Ψһ�⣬x1 = x2 =%f\n", x1);
	}
	else
	{
		printf ("�޽�\n");
	}
	return 0;
}
