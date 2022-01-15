#pragma once

#ifndef WINGAPP_H
#define WINGAPP_H

namespace WingUI
{
	constexpr auto MAX_LOADSTRING = 100;

	class WingAPP
	{
	public:
		WingAPP();
		HINSTANCE GetInstanceHandle();
		static HCURSOR GetDefaultCursorHandle(StandardCursor cursor);

	private:
		HINSTANCE m_hinstance = NULL;
		WCHAR szWindowClass[MAX_LOADSTRING] = L"";
		WCHAR szTitle[MAX_LOADSTRING] = L"";

	private:
		BOOL InitInstance(HINSTANCE hInstance, int nCmdShow);
		ATOM RegisterMainClass(HINSTANCE hInstance, StandardCursor cursor, LPWSTR hmenu, HICON hIcon, HICON hIconSm);

	};

}

#endif // !WINGAPP_H




