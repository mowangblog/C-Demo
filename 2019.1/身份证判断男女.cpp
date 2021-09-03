# include <stdio.h>

int main()
{
	char Card[100];
	gets(Card); 
	if(Card[16]%2==0)
	{
		printf("Å®");
	}
	else
	{
		printf("ÄĞ"); 
	}
	
	return 0;
 } 
