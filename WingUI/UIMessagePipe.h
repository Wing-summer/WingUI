#pragma once

#ifndef UIMESSAGEPIPE_H
#define UIMESSAGEPIPE_H

namespace WingUI
{
	class UIMessagePipe
	{
	public:
		UIMessagePipe();

	public:
		static LRESULT CALLBACK _WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

	private:

	};
}

#endif // !UIMESSAGEPIPE_H