// CryptionRCCDlg.h : 標頭檔案
//

#pragma once
#include "afxwin.h"

// CCryptionRCCDlg 對話方塊
class CCryptionRCCDlg : public CDialog
{
// 建構
public:
	CCryptionRCCDlg(CWnd* pParent = NULL);	// 標準建構函式

// 對話方塊資料
	enum { IDD = IDD_CRYPTIONRCC_DIALOG };

	enum
	{
		NormalCryption = 0,

		CryptionType, // 加密類型
	};
	enum
	{
		FileCryption = 0,   // 檔案加解密
		FolderCryption = 1, // 資料夾加解密
	};

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支援

// 實???
protected:
	HICON m_hIcon;

	// 產生的消息對應函式
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	void clearslot(); // 清除欄位
	void AddEditString( const char* szInfo ); // 加入訊息至多行輸出
	BOOL FileEncryption(); // 執行檔案加密（來自 UI）
	BOOL FileDecryption(); // 執行檔案解密（來自 UI）
	BOOL FileEncryption(CString fileinput , CString fileoutput); // 指定路徑檔案加密
	BOOL FileDecryption(CString fileinput , CString fileoutput); // 指定路徑檔案解密
	BOOL FolderEncryption( const CString& strInput, const CString& strOutput );   // 資料夾加密
	BOOL FolderDecryption( const CString& strInput, const CString& strOutput );   // 資料夾解密
	afx_msg void OnBnClickedButton1(); // 按鈕1點擊事件
	afx_msg void OnBnClickedButton2(); // 按鈕2點擊事件
	afx_msg void OnBnClickedButton3(); // 按鈕3點擊事件
	afx_msg void OnBnClickedButton4(); // 按鈕4點擊事件
	afx_msg void OnBnClickedButton5(); // 按鈕5點擊事件
	CString m_cInput;       // 輸入位址
	CString m_cOutput;      // 輸出位址
	afx_msg void OnCbnSelchangeCombo1(); // 下拉選單選擇改變事件
	CComboBox m_cCombobox;      // 模式選擇下拉選單
	afx_msg void OnBnClickedButton6(); // 按鈕6點擊事件
	CComboBox m_cModCryption;   // 加密模式下拉選單
	CString m_cEditInfo;        // 編輯資訊
	CEdit m_cEdit;              // 多行訊息編輯欄
	afx_msg void OnEnChangeEditStatic(); // 編輯欄變更事件
};