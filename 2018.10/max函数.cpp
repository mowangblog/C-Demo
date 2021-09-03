# include <stdio.h>

int * max(int*,int);

int main()
{
	int a[5]={3,4,6,9,13};
	int n=max(a,5)[0]; 
	printf("最大的值是%d",n);	
	return 0;
}

int * max(int * a,int len)
{
	int t;
	for(int i=0;i<len;++i)
	{
		for(int j=i+1;j<len;++j)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	return a;
	
 } 
