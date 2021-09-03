# include <stdio.h>

int b[10];

int * OddArry(int * a)
{
	int j=0;
	for(int i=0;i<11;++i)
	{
		if(a[i]%2==1)
		{
			b[j]=a[i];
			++j;
		}
	}
	return b; 
}

int main()
{
	int a[11]={1,2,3,4,5,6,7,8,9,10,11}; 
 	int * c=OddArry(a);
	for(int i=0;i<6;++i)
	{
		printf("%d ",c[i]);
	}
	return 0;
 } 
 
 

	
