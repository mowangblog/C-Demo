# include<stdio.h>

int main()
{
	int t,i; 
	int a[3];
	for(i=0;i<3;++i)
	{	
		printf("请输入三个整数："); 
		scanf("%d",&a[i]);
	}
	if(a[0]>a[1])
	{
		t=a[0];
		a[0]=a[1];
		a[1]=t;
	}
	if(a[0]>a[2])
	{
		t=a[0];
		a[0]=a[2];
		a[2]=t;
	}
	if(a[1]>a[2])
	{
		t=a[1];
		a[1]=a[2];
		a[2]=t;
	}
	
	printf("排列后："); 
	
	for(i=0;i<3;++i)
	{	
		printf("%-5d",a[i]);
	}
} 
	

  
