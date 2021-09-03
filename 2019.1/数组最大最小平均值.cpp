# include <stdio.h>

int main()
{
	float a[8]={9.8,12,45,67,23,1.98,2.25,45},t,sum=0;
	for(int i=0;i<8;++i)
	{
		for(int j=i+1;j<8;++j)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;	
			}	
		} 
	}
	for(int i=0;i<8;++i)
	{
		sum+=a[i];
	}
	printf("%f\n",sum/8);
	printf("max=%f",a[7]);
	printf("end=%f",a[0]); 
	
	return 0;
 } 
