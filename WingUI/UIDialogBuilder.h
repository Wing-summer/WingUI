#pragma once

#ifndef UIDLGBUILDER_H
#define UIDLGBUILDER_H

#include "UIControl.h"

namespace WingUI
{

	class IDialogBuilderCallback
	{
	public:
		virtual UIControl* CreateControl(const WCHAR* pstrClass) = 0;
	};

	class WingUI_API UIDialogBuilder
	{
	public:
		UIDialogBuilder(WCHAR* xmlURL);

	private:
		pugi::xml_node m_node;

	private:
		bool CreateWingDlg();
	};
}

#endif // !UIDLGBUILDER_H
