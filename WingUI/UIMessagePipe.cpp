#include "pch.h"
#include "UIMessagePipe.h"
#include <WinUser.h>

namespace WingUI
{

	UIMessagePipe::UIMessagePipe()
	{

	}

	LRESULT UIMessagePipe::_WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
	{
        switch (message)
        {
            case WM_COMMAND:
            {
                int wmId = LOWORD(wParam);
                // 分析菜单选择:
                switch (wmId)
                {
                    default:
                        return DefWindowProc(hWnd, message, wParam, lParam);
                }
            }
            break;
            case WM_PAINT:
            {
                PAINTSTRUCT ps;
                HDC hdc = BeginPaint(hWnd, &ps);
                // TODO: 在此处添加使用 hdc 的任何绘图代码...
                EndPaint(hWnd, &ps);
            }
            break;
            case WM_DESTROY:
                PostQuitMessage(0);
                break;
            default:
                return DefWindowProc(hWnd, message, wParam, lParam);
        }
        return 0;
    }

}
