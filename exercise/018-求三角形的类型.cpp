# include <stdio.h>
# include <math.h>
int main()
{
	float a,b,c,s,area;
	printf("请输入三角形的三个边：");
	scanf("%f %f %f",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a) 
	{
		s=(a+b+c)/2;
		area=(float)sqrt(s*(s-a)*(s-b)*(s-c));
		printf("三角形的面积是%f\n",area);
		if(a==b&&b==c)
		{
			printf("全等三角形\n"); 
		}
		else if(a==b||b==c||a==c)
		{
			printf("等腰三角形\n");
		}
		else if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
		{
			printf("直角三角形\n");
		}
		else
		{
			printf("其他三角形\n");
		}
	}
	else
	{
		printf("不能构成三角形"); 
	}
	
	return 0;
 } 
