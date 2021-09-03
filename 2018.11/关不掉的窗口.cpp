
/**
 * 让关闭按钮失效（变灰）
 */
/*#include <Windows.h>
#include <stdio.h>
 
int main()
{
    DeleteMenu(GetSystemMenu(GetConsoleWindow(), FALSE), SC_CLOSE, MF_BYCOMMAND);
    DrawMenuBar(GetConsoleWindow());
    // 上面两句也可以换成
    // EnableMenuItem(GetSystemMenu(GetConsoleWindow(), FALSE), SC_CLOSE, MF_GRAYED);
    printf("关闭按钮按不了了\n");
    system("pause");
    
    return 0;
}*/
 
 

 //隐藏关闭按钮

#include <Windows.h>
#include <stdio.h>
 
int main()
{
    HWND hwnd = GetConsoleWindow();
    LONG Style;    //窗口风格
    Style = GetWindowLong(hwnd, GWL_STYLE);   // 得到窗口风格   
    Style = Style & ~WS_CAPTION;             //去掉标题栏
    SetWindowLong(hwnd, GWL_STYLE, Style);     //为窗口设置新的风格
    printf("关闭按钮不见了\n");
    system("pause");
}
