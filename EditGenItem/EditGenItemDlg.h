#include "afxcmn.h"
#include "../../Lib_Engine/Common/GLTexFile.h"
#pragma once

// CEditGenItemDlg 對話方塊
class CEditGenItemDlg : public CDialog
{
// 建構
public:
	CEditGenItemDlg(CWnd* pParent = NULL);	// 標準建構函式

// 對話方塊資料
	enum { IDD = IDD_ABF_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支援

public:
	HRESULT hr;
	CString strTemp, strLine, strSaleType, AppendAllTexts;
	CStringFile StrFile;
	WORD dwVERSION;
	gltexfile glTextFile;
	DWORD dwNUM;
	DWORD dwSpecNum;
	float m_fGenRate;
	DWORD dwIDNUM;
	DWORD wNum[100];         // 掉落數量陣列
	float fRate[100];        // 掉落機率陣列
	DWORD dwSpecID[256];     // 特殊物品ID陣列
	float ifRate[256];       // 特殊物品機率陣列
	DWORD wMainID[256];      // 主ID陣列
	DWORD wSubID[256];       // 子ID陣列
	float idfRate[256];      // 物品ID機率陣列
// 實作
protected:
	HICON m_hIcon;

	// 產生的訊息對應函式
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	BOOL		 UpdateData(const char* szFileName);             // 更新資料
	BOOL		 SaveData(const char* lpszPathName);             // 儲存資料
	void		 InitSaleList();                                 // 初始化販售清單
	void		 InitBoneList();                                 // （未實作，保留）
	CListCtrl Sale_List;                                         // 掉落物列表
	CListCtrl ItemSpec_List;                                     // 特殊物品列表
	CListCtrl ItemID_List;                                       // 物品ID列表

	afx_msg void OnBnClickedButtonSalelistAdd();                 // 新增掉落數量
	afx_msg void OnBnClickedButtonSalelistDelete();              // 刪除掉落數量
	afx_msg void OnNMDblclkListSale(NMHDR *pNMHDR, LRESULT *pResult); // 掉落數量雙擊處理

	afx_msg void OnBnClickedButtonCrowsaleLoad();                // 載入GENITEM
	afx_msg void OnBnClickedButtonCrowsaleSave();                // 儲存GENITEM
	afx_msg void OnBnClickedButtonSalelistOk();                  // 確認掉落數量編輯

	afx_msg void OnBnClickedButtonSpeclistAdd();                 // 新增特殊物品
	afx_msg void OnBnClickedButtonSpeclistDelete();              // 刪除特殊物品
	afx_msg void OnNMDblclkListSpec(NMHDR *pNMHDR, LRESULT *pResult); // 特殊物品雙擊處理
	afx_msg void OnBnClickedButtonSpeclistOk();                  // 確認特殊物品編輯

	afx_msg void OnBnClickedButtonItemlistAdd();                 // 新增物品ID
	afx_msg void OnBnClickedButtonItemlistDelete();              // 刪除物品ID
	afx_msg void OnNMDblclkListItem(NMHDR *pNMHDR, LRESULT *pResult); // 物品ID雙擊處理
	afx_msg void OnBnClickedButtonItemlistOk();                  // 確認物品ID編輯
	afx_msg void OnBnClickedButtonUpdateGenItem();               // 更新GENITEM顯示
};