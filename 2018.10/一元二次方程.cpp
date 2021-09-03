# include<stdio.h>
# include<math.h>
  int main() 
{
	int a,b,c;
	int x1,x2,p;
	printf("«Î ‰»Îa,b,c:");
	scanf("%d %d %d",&a,&b,&c); 
	p=b*b-4*a*c;
	x1=(-b+sqrt(p))/(2*a);
	x2=(-b-sqrt(p))/(2*a);
	printf("x1=%f,x2=%f\n",x1,x2);
 } 
