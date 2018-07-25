// WPS_TESTDlg.h : header file
//

#if !defined(AFX_WPS_TESTDLG_H__A150EB71_7558_4CAB_9527_57B75BB8BE6B__INCLUDED_)
#define AFX_WPS_TESTDLG_H__A150EB71_7558_4CAB_9527_57B75BB8BE6B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CWPS_TESTDlg dialog

class CWPS_TESTDlg : public CDialog
{
// Construction
public:
	CWPS_TESTDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CWPS_TESTDlg)
	enum { IDD = IDD_WPS_TEST_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWPS_TESTDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CWPS_TESTDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WPS_TESTDLG_H__A150EB71_7558_4CAB_9527_57B75BB8BE6B__INCLUDED_)
