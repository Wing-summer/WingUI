#pragma once

#define WIN32_LEAN_AND_MEAN             // 从 Windows 头文件中排除极少使用的内容
// Windows 头文件
#include <windows.h>

#ifndef PUGIXML_NO_XPATH
#define PUGIXML_NO_XPATH
#endif // !PUGIXML_NO_XPATH

#ifndef PUGIXML_HEADER_ONLY
#define  PUGIXML_HEADER_ONLY //解决无法解析的外部命令
#endif // !1

#ifndef WingUI_API
#define WingUI_API __declspec(dllexport)
#endif // !WingUI_API

#ifndef ASSERT
#define ASSERT(expr)  _ASSERTE(expr)
#endif

#define DECLARE_CONTROL(class_name)\
public:\
	static CControlUI* CreateControl();