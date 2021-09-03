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
int number(int year,int m,int d)
{
	int sum=0,i,j;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	if(leap(year))
	{
		for(i=0;i<m-1;++i)
		{
			sum+=a[i];
		}
	}
	else
	{
		for(i=0;i<m-1;++i)
		{
			sum+=b[i];
		}
	}
	
	for(j=2011;j<year;++j)
	{
		if(leap(year))
		{
			sum+=366;
		}
		else
		{
			sum+=365;
		}
	}
	sum+=d;
	
	return sum;
 }
  
int main()
{
	int year,month,day,n;
	printf("�����������գ�");
	scanf("%d %d %d",&year,&month,&day);
	n = number(year,month,day);
	if((n%5)<4&&(n%5)>0)
	{
		printf("%d %d %d ����",year,month,day); 
	}
	else
	{
		printf("%d %d %d ɹ��",year,month,day);	
	} 
	return 0;
}
