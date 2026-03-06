// CryptionRCC.h : PROJECT_NAME 應用程式的主標頭檔案
//

#pragma once

#ifndef __AFXWIN_H__
	#error 請於本檔案之前 include 'stdafx.h' 以使用 PCH
#endif

#include "resource.h"		// 主要符號


// CCryptionRCCApp:
// 相關實作請見 CryptionRCC.cpp
//

class CCryptionRCCApp : public CWinApp
{
public:
	CCryptionRCCApp();

// 覆寫
	public:
	virtual BOOL InitInstance();

// 實作

	DECLARE_MESSAGE_MAP()
};

extern CCryptionRCCApp theApp;