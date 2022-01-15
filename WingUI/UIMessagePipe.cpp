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
                // �����˵�ѡ��:
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
                // TODO: �ڴ˴����ʹ�� hdc ���κλ�ͼ����...
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
