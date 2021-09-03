# include <stdio.h>
# include <string.h>

int main() 
{
	char username[100];
	char password[100];
	printf("请输入用户名："); 
	gets(username);
	printf("请输入密码：");
	gets(password);
	if (!strcmp(username,"lixuan")&&!strcmp(password,"123456"))
	{
		printf("用户%s登陆成功",username);
	}
	else  
	{
		puts("账户或密码错误");
	
	} 
	
	return 0;
}
