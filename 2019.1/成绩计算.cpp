# include <stdio.h>

int main()
{
	int val,n[100],i=0;
	int a=0,b=0,c=0,d=0,e=0;
	while(1)
	{
		scanf("%d",&val);
		if(val==-1)
		{
			break;
		}
		else
		{
			n[i]=val;
		}
		++i;
	}
	for(int j=0;j<i;++j)
	{
		if(n[j]<60)
		{
			++a;
		}
		else if(n[j]>=60&&n[j]<70) 
		{
			++b;
		}
		else if(n[j]>=70&&n[j]<80)
		{
			++c;
		}
		else if(n[j]>=80&&n[j]<90)
		{
			++d;
		}
		else
		{
			++e;
		}
	}
	printf("������%d\n",a);
	printf("����%d\n",b);
	printf("�е�%d\n",c);
	printf("����%d\n",d);
	printf("����%d\n",e);
	return 0;
}
