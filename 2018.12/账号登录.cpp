# include <stdio.h>
# include <string.h>

int main() 
{
	char username[100];
	char password[100];
	printf("�������û�����"); 
	gets(username);
	printf("���������룺");
	gets(password);
	if (!strcmp(username,"lixuan")&&!strcmp(password,"123456"))
	{
		printf("�û�%s��½�ɹ�",username);
	}
	else  
	{
		puts("�˻����������");
	
	} 
	
	return 0;
}
