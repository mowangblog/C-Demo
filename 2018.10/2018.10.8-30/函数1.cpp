# include <stdio.h>

void max(int i,int j)
{

    if(i>j)
	  printf("%d\n",i);
	else
	  printf("%d\n",j);
}
int main(void)
{
    int a,b;
	int c,d;
    int e,f;
    
    a=3,b=56,c=54,d=-56,e=66,f=87;
	max(a,b);
	max(c,d);
	max(e,f);
	return 0;
 } 
