# include <stdio.h>
 int main(void)
 {
 	int a,b,c,t;
 	printf("����������������\n"); 
 	scanf("%d %d %d",&a,&b,&c);
 	if(a>b&&b>c)//a>b>c
 	   a=a,b=b,c=c;
 	else if(a>c&&b<c)   //a>c>b
 	   a=a,t=b,b=c,c=t;
 	else if(b>c&&c>a)//b>c>a
	   t=c,c=a,a=b,b=t;
	else if(b>a&&c<a)//b>a>c
	   t=b,b=a,c=c,a=t;
	else if(c>a&&b<a)       //c>a>b
	   t=b,b=a,a=c,c=t;
	else //C>b>a
	   t=a,a=c,b=b,c=t  ;       
 	printf("����С�������£�%d %d %d\n",a,b,c);
 	return 0;
  } 
  //2018.10.4  ���Ѵ���ʱ�䡣����ȫ���Լ�д����!���ģ� 
