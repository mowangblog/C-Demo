# include <stdio.h>
 
int main(void)
{
	int i,p;
	int k = 0;
	int sum = 0;
	
	for(i=1;i<=100;i+=2)
	{
	    sum=sum+i; 
	    ++k; 
	}
    printf("100���������ĸ���Ϊ��%d\n",k); 
    printf("100����������Ϊ��%d\n",sum);
	    
    p=sum/k;
    printf("100��������ƽ��ֵΪ��%d\n",p);
    
    sum=0;
	    
	for(i=0;i<=100;i+=2) 
	    sum=sum+i;
		
	printf("100����ż����Ϊ��%d\n",sum);   
	
	return 0;
  }  
