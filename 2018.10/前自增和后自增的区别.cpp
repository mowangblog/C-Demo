# include <stdio.h>

int main (void)
{
	int i, j, k, m;
	i=j=3;
	
	k=++i;//k=4 
	m=j++;//后自增是加一之前的值 m=3 
	
	printf("i=%d,j=%d,k=%d,m=%d\n",i,j,k,m);
	
	
	return 0;
 } 
 //前自增整体表达式的值是i+1之后的值
 //后自增整体表达式的值是i+1之前的值 
