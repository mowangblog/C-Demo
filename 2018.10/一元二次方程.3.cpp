# include <stdio.h>
# include <math.h> 

int main(void)
{
	double a,b,c;
	double delta;
	double x1,x2;
	char ch;

    do
	{
	 printf("������һԪ���η��̵�����ϵ����\n");
	 printf("a=");
	 scanf("%lf",&a);
	 printf("b=");
	 scanf("%lf",&b);
	 printf("c=");
	 scanf("%lf",&c);
	
	delta = b*b - 4*a*c;
	 
	if(delta>0)
	{
		x1 = (-b+sqrt(delta)) / (2*a);
		x2 = (-b-sqrt(delta)) / (2*a);
		printf("�����������⣬x1=%lf,x2=%lf\n",x1,x2);
	}
	else if (0 == delta)
    {
	 	x1 = x2 = (-b) /(2*a);
	 	printf("������Ψһ�⣻x1=x2=%lf\n",x1,x2);
	 	
	} 
	else
	{
	    printf("�����޽�\n");    
    }
    printf("���������Y/N��\n\n");
    scanf(" %c",&ch);
	} 
    while(ch=='y'||ch=='Y');
	printf("�������");
	return 0;
}
