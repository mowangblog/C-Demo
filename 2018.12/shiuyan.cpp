# include <stdio.h>

int * OddArry(int * a);
int main()
{
	int a[11]={1,2,3,4,5,6,7,8,9,10,11}; 

	for(int i=0;i<6;++i)
	{
		printf("%d ",OddArry(a)[i]);
	}
	return 0;
} 
 
int * OddArry(int * a)
{
	int b[10],j=0;
	for(int i=0;i<11;++i)
	{
		if(*a%2==1)
		{
			b[j]=*a;
			printf("%d",b[0]);
			++j;
		}
		a++;
	}
	
	return b; 
}
	
	

