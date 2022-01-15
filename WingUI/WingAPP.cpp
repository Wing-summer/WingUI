#include "pch.h"
#include "WingAPP.h"
#include "UIDefine.h"

namespace WingUI
{
	WingAPP::WingAPP()
	{

	}

	HINSTANCE WingAPP::GetInstanceHandle()
	{
		return m_hinstance;
	}

	HCURSOR WingAPP::GetDefaultCursorHandle(StandardCursor cursor)
	{
		return LoadCursor(nullptr, MAKEINTRESOURCE(cursor));
	}

	BOOL WingAPP::InitInstance(HINSTANCE hInstance, int nCmdShow)
	{
		m_hinstance = hInstance; // 将实例句柄存储在全局变量中

		HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
			CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);

		if (!hWnd)
		{
			return FALSE;
		}

		ShowWindow(hWnd, nCmdShow);
		UpdateWindow(hWnd);

		return TRUE;
	}

	ATOM WingAPP::RegisterMainClass(HINSTANCE hInstance,StandardCursor cursor,LPWSTR hmenu,HICON hIcon, HICON hIconSm)
	{
		WNDCLASSEXW wcex{ sizeof(WNDCLASSEX) };

		wcex.style = CS_HREDRAW | CS_VREDRAW;
		wcex.lpfnWndProc = UIMessagePipe::_WndProc;
		wcex.cbClsExtra = 0;
		wcex.cbWndExtra = 0;
		wcex.hInstance = hInstance;
		wcex.hIcon = hIcon;
		wcex.hCursor = WingAPP::GetDefaultCursorHandle(cursor);
		wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
		wcex.lpszMenuName = hmenu;
		wcex.lpszClassName = szWindowClass;
		wcex.hIconSm = hIconSm;
		return RegisterClassExW(&wcex);
	}

}