# include <stdio.h>
# include <windows.h>
# include <malloc.h>
int main (void)
{
	int c , i , j ;
	HWND hwnd = GetConsoleWindow();
    LONG Style;    //���ڷ��
    Style = GetWindowLong(hwnd, GWL_STYLE);   // �õ����ڷ��   
    Style = Style & ~WS_CAPTION;             //ȥ��������
    SetWindowLong(hwnd, GWL_STYLE, Style);     //Ϊ���������µķ��
	
	nihao: 
	printf ("1������\n") ;
	printf ("2: ������ը\n") ;
	printf ("��ѡ��    \n") ;
	
	scanf ("%d",&c) ;
	
	if ( c==1 )
	{
		system ("shutdown -s -t 20") ;
	}
	else if ( 2==c )
	{
		printf ("�ٺ٣����Լ�����ը\n ") ;
		for ( j = 0 ; j < 50 ; ++j )
		system ("start") ;
	}
	else 
	{
		printf ("���ô��ˣ����������롣\n") ;
		goto nihao ;
	}
	return 0;
}

