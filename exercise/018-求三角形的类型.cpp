# include <stdio.h>
# include <math.h>
int main()
{
	float a,b,c,s,area;
	printf("�����������ε������ߣ�");
	scanf("%f %f %f",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a) 
	{
		s=(a+b+c)/2;
		area=(float)sqrt(s*(s-a)*(s-b)*(s-c));
		printf("�����ε������%f\n",area);
		if(a==b&&b==c)
		{
			printf("ȫ��������\n"); 
		}
		else if(a==b||b==c||a==c)
		{
			printf("����������\n");
		}
		else if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
		{
			printf("ֱ��������\n");
		}
		else
		{
			printf("����������\n");
		}
	}
	else
	{
		printf("���ܹ���������"); 
	}
	
	return 0;
 } 
