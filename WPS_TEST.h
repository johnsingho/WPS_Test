// WPS_TEST.h : main header file for the WPS_TEST application
//

#if !defined(AFX_WPS_TEST_H__678F7389_5030_4A0B_84B6_DF0F138C808B__INCLUDED_)
#define AFX_WPS_TEST_H__678F7389_5030_4A0B_84B6_DF0F138C808B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CWPS_TESTApp:
// See WPS_TEST.cpp for the implementation of this class
//

class CWPS_TESTApp : public CWinApp
{
public:
	CWPS_TESTApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWPS_TESTApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CWPS_TESTApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WPS_TEST_H__678F7389_5030_4A0B_84B6_DF0F138C808B__INCLUDED_)
