# include <stdio.h>
# include <string.h>

int main()
{
	char str[10024];
	char word[1024];
	char *ptr;
	gets(str);
	gets(word);
	ptr=strstr(str,word);
	if(ptr==NULL)
	{
		printf("no");
	}
	else
	{
		printf("%s",ptr); 
	} 
	
	return 0;
}
