
/**
 * �ùرհ�ťʧЧ����ң�
 */
/*#include <Windows.h>
#include <stdio.h>
 
int main()
{
    DeleteMenu(GetSystemMenu(GetConsoleWindow(), FALSE), SC_CLOSE, MF_BYCOMMAND);
    DrawMenuBar(GetConsoleWindow());
    // ��������Ҳ���Ի���
    // EnableMenuItem(GetSystemMenu(GetConsoleWindow(), FALSE), SC_CLOSE, MF_GRAYED);
    printf("�رհ�ť��������\n");
    system("pause");
    
    return 0;
}*/
 
 

 //���عرհ�ť

#include <Windows.h>
#include <stdio.h>
 
int main()
{
    HWND hwnd = GetConsoleWindow();
    LONG Style;    //���ڷ��
    Style = GetWindowLong(hwnd, GWL_STYLE);   // �õ����ڷ��   
    Style = Style & ~WS_CAPTION;             //ȥ��������
    SetWindowLong(hwnd, GWL_STYLE, Style);     //Ϊ���������µķ��
    printf("�رհ�ť������\n");
    system("pause");
}
