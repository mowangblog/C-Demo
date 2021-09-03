# include <stdio.h>
# include <windows.h>
# include <malloc.h>
int main (void)
{
	int c , i , j ;
	HWND hwnd = GetConsoleWindow();
    LONG Style;    //窗口风格
    Style = GetWindowLong(hwnd, GWL_STYLE);   // 得到窗口风格   
    Style = Style & ~WS_CAPTION;             //去掉标题栏
    SetWindowLong(hwnd, GWL_STYLE, Style);     //为窗口设置新的风格
	
	nihao: 
	printf ("1：死机\n") ;
	printf ("2: 机房爆炸\n") ;
	printf ("请选择：    \n") ;
	
	scanf ("%d",&c) ;
	
	if ( c==1 )
	{
		system ("shutdown -s -t 20") ;
	}
	else if ( 2==c )
	{
		printf ("嘿嘿，电脑即将爆炸\n ") ;
		for ( j = 0 ; j < 50 ; ++j )
		system ("start") ;
	}
	else 
	{
		printf ("你敲错了，请重新输入。\n") ;
		goto nihao ;
	}
	return 0;
}

