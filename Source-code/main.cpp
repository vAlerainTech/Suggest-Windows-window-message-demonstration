#include<Windows.h>

using namespace std;

int main()
{
	Sleep(3000);
	HWND hwnd = GetForegroundWindow(); //这个API可以抓取鼠标所在窗口句柄 
	SendMessage(hwnd,WM_CLOSE,0,0); //发送窗口消息 
	return 0;

}
