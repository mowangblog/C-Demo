# include <stdio.h>
# include <string.h>

int main()
{
	char a[100];
	gets(a);
	int count=0;
	char * ptr=a;
	while((ptr=strchr(ptr,'c'))!=NULL)
	{
		count++;
		ptr++;
	}
	printf("%d",count);
	
	return 0;
 } 
