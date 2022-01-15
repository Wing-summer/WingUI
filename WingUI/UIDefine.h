#pragma once

#ifndef UIDEFINE_H
#define UIDEFINE_H

#include "CDPI.h"
#include "UIControl.h"
#include  "UIDialogBuilder.h"
#include "UIMessagePipe.h"
#include "WingAPP.h"

namespace WingUI
{
	typedef  std::wstring wingstr;


	enum class StandardCursor
	{
		ARROW = 32512,
		IBEAM = 32513,
		WAIT = 32514,
		CROSS = 32515,
		UPARROW = 32516,
		SIZENWSE = 32642,
		SIZENESW = 32643,
		SIZEWE = 32644,
		SIZENS = 32645,
		SIZEALL = 32646,
		NO = 32648,
		HAND = 32649,
		APPSTARTING = 32650,
		HELP = 32651,
		PIN = 32671,
		PERSON = 32672
	};




}
#endif // !UIDEFINE_H