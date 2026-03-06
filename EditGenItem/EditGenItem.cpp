#include "stdafx.h"
#include "EditGenItem.h"
#include "EditGenItemDlg.h"
#include "../Lib_Engine/Utils/MinBugTrap.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEditGenItemApp

BEGIN_MESSAGE_MAP(CEditGenItemApp, CWinApp)
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()


// CEditGenItemApp 建構函式

CEditGenItemApp::CEditGenItemApp()
{
	// TODO: 在這裡加入建構程式碼，
	// 請將所有重要初始化放在 InitInstance
	BUG_TRAP::BugTrapInstall( std::string(_T("EditGenItem")));
}


// 唯一的 CEditGenItemApp 物件

CEditGenItemApp theApp;


// CEditGenItemApp 初始化

BOOL CEditGenItemApp::InitInstance()
{
	// 若應用程式 manifest 指定使用 ComCtl32.dll 6.0 以上版本來啟用視覺樣式，
	// 在 Windows XP 上必須呼叫 InitCommonControls()，
	// 否則任何視窗建立都會失敗。
	InitCommonControls();

	CWinApp::InitInstance();

	AfxEnableControlContainer();

	// 標準初始化
	// 如果未使用這些功能且想減小最終執行檔案大小，
	// 應該從下方移除不需要的初始化內容
	// 變更儲存設定的註冊表機碼
	// TODO: 請修改這個字串為合適的名稱，例如貴公司或組織名稱
	SetRegistryKey(_T("Local AppWizard-Generated Applications"));

	CEditGenItemDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: 在這裡處理對話框用 "確定" 關閉時的程式碼
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: 在這裡處理對話框用 "取消" 關閉時的程式碼
	}

	// 由於對話框已關閉，回傳 FALSE 以結束應用程式，
	// 而不是啟動應用程式的訊息迴圈。
	return FALSE;
}