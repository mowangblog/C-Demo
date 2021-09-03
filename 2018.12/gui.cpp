#include <tchar.h>
#include <windows.h>
#pragma comment(linker ,"/entry:mainCRTStartup /subsystem:windows")
int main()
{
	while(1)
	{
		MessageBox(0, _T("Éµ±Æ\n"), _T("6666"), MB_OKCANCEL);
	}
	return 0;
} 
