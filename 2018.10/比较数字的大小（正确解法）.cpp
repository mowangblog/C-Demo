# include <stdio.h>
 int main(void)
{
 	int a, b, c, t;
 	
 	printf("��������������������");
 	scanf("%d %d %d", &a , &b, &c);
 	
 	if(a<b)
 	{
	   t=a; //t=a
 	   a=b; 
 	   b=t;  //a ��  b���� 
    }
    if(a<c)
    {
	   t=a;
       a=c;
       c=t;  //a ��  c���� 
    } 
    if(b<c) 
	{
	   t=b;
	   b=c;
	   c=t;  //c  ��  a���� 
    }  
    printf("%d %d %d",a,b,c);
 	return 0;
} 
