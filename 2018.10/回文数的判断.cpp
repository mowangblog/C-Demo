# include <stdio.h>

int main(void)
{
	int val;
	int m ;
	int sum = 0;
	printf("请输入要判断是否回数字的数字；"); 
	scanf("%d",&val);
	
	m=val;  
	while  (m)    //m要先赋值    （m=val;m;m/10)        
	{
	  sum=sum*10+m%10;    //m%10=   m除于10的余数 
	  m/=10;     //m=m/10
	} 
	if (sum == val)
	   printf("yes");
	else  
	   printf("no"); 
	
	return 0;
 } 
