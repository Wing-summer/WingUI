#include "pch.h"
#include "UIDialogBuilder.h"

namespace WingUI
{
	UIDialogBuilder::UIDialogBuilder(WCHAR* xmlURL)
	{
		pugi::xml_document* m_doc = new pugi::xml_document();
		m_doc->load_file(xmlURL);
		m_node = m_doc->child("Window");


		delete m_doc;
	}
}
