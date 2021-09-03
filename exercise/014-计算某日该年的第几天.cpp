# include <stdio.h>

int leap(int a)
{
	if(a%4==0&&a%100!=0||a%400==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int number(int year,int month,int day)
{
	int sum,i;
	sum=0;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	if(leap(year))
	{
		for(i=0;i<month-1;++i)
		{
			sum+=a[i];
		}
	}
	else
	{
		for(i=0;i<month-1;++i)
		{
			sum+=b[i];
		}
	} 
	sum+=day;
	return sum;
}

int main ()
{
	int year,month,day,n;
	printf("请输入年，月，日：");
	scanf("%d %d %d",&year,&month,&day); 
	n = number(year,month,day);
	printf("第%d天",n);  
 } 
