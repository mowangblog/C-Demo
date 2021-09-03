# include <stdio.h>
# include <string.h> 

int main() 
{
	char str[]="afjksjkf";
	char str1[]="afjkskflkld";
	if(strncmp(str,str1,6))
	{
		printf("no");
	} 
	else 
	{
		printf("yes");
	}
	
	
	
	return 0;
}
