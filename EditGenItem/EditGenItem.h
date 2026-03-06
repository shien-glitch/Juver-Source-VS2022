#pragma once

#ifndef __AFXWIN_H__
	#error 請先 include 'stdafx.h' 之後再 include 本檔案以使用 PCH
#endif

#include "resource.h"

// CEditGenItemApp:
// 相關實作請參見 EditGenItemApp.cpp
//

class CEditGenItemApp : public CWinApp
{
public:
	CEditGenItemApp();

// 覆寫
public:
	virtual BOOL InitInstance();

// 實作
	DECLARE_MESSAGE_MAP()
};

extern CEditGenItemApp theApp;