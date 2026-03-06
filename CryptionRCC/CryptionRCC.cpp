// CryptionRCC.cpp : 定義應用程式的類別行為
//

#include "stdafx.h"
#include "CryptionRCC.h"
#include "CryptionRCCDlg.h"
//#include "../MfcExLib/MinBugTrap.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCryptionRCCApp

BEGIN_MESSAGE_MAP(CCryptionRCCApp, CWinApp)
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()


// CCryptionRCCApp 建構函式

CCryptionRCCApp::CCryptionRCCApp()
{
	// TODO: 在這裡加入建構程式碼，
	// 將所有重要初始化放在 InitInstance
	//BUG_TRAP::BugTrapInstall( std::string(_T("CryptionRCC")));
}


// 唯一的 CCryptionRCCApp 物件

CCryptionRCCApp theApp;


// CCryptionRCCApp 初始化

BOOL CCryptionRCCApp::InitInstance()
{
	// 如果應用程式 manifest 指定使用 ComCtl32.dll 6.0 以上版本來啟用視覺樣式，
	// 在 Windows XP 上就必須呼叫 InitCommonControls()。
	// 否則，任何視窗的建立都會失敗。
	InitCommonControls();

	CWinApp::InitInstance();

	AfxEnableControlContainer();

	// 標準初始化
	// 如果不使用這些功能並想減少最終執行檔的大小，
	// 應移除以下無需的初始化例程
	// 修改註冊表機碼以儲存設定
	// TODO: 請將這個字串修改為適合您公司的名稱或組織
	SetRegistryKey(_T("Local AppWizard-Generated Applications"));

	CCryptionRCCDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: 在此放置用戶以「確定」結束對話框時要執行的程式碼
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: 在此放置用戶以「取消」結束對話框時要執行的程式碼
	}

	// 因為對話方塊已關閉，所以回傳 FALSE 以結束應用程式，
	// 而不是啟動應用程式的訊息迴圈。
	return FALSE;
}