
// MFCApplication1Dlg.h: 头文件
//
#include<string>
#include<iostream>
#pragma once
// CMFCApplication1Dlg 对话框
class CMFCApplication1Dlg : public CDialogEx
{
// 构造
public:
	CMFCApplication1Dlg(CWnd* pParent = nullptr);	// 标准构造函数
	void CMFCApplication1Dlg::test_1(int q)
	{
		CEdit* p = (CEdit*)GetDlgItem(IDC_EDIT2);
		p->SetWindowText(_T(""));
		CString s[100];
		s[0] = "高文进";
		s[1] = "e";
		s[2] = "fg";
		s[3] = "dsv";
		s[4] = "hgf";
		s[5] = "vcd";
		//srand(time(0));
		while (q--)
		{
			int i = rand() % 6;
			//GetDlgItem(IDC_STATIC)->SetWindowTextW(s[i]);
			CEdit* pEdit=(CEdit*)GetDlgItem(IDC_EDIT2);
			int index = pEdit->GetWindowTextLength();
			pEdit->SetSel(index, index);
			pEdit->ReplaceSel(s[i]);
			pEdit->ReplaceSel(_T("\r\n"));;
		}
		//Sleep(100);
	}
// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION1_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnBnClickedButton1();
	afx_msg void OnEnChangeEdit2();
};
