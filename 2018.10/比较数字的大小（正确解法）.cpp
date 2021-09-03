# include <stdio.h>
 int main(void)
{
 	int a, b, c, t;
 	
 	printf("请输入任意三个整数：");
 	scanf("%d %d %d", &a , &b, &c);
 	
 	if(a<b)
 	{
	   t=a; //t=a
 	   a=b; 
 	   b=t;  //a 与  b互换 
    }
    if(a<c)
    {
	   t=a;
       a=c;
       c=t;  //a 与  c互换 
    } 
    if(b<c) 
	{
	   t=b;
	   b=c;
	   c=t;  //c  与  a互换 
    }  
    printf("%d %d %d",a,b,c);
 	return 0;
} 
