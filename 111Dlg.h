// 111Dlg.h : header file
//
//{{AFX_INCLUDES()
#include "cwbutton.h"
//}}AFX_INCLUDES

#if !defined(AFX_111DLG_H__F4C88520_954A_45DA_A18D_69B1A738FAA8__INCLUDED_)
#define AFX_111DLG_H__F4C88520_954A_45DA_A18D_69B1A738FAA8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMy111Dlg dialog

class CMy111Dlg : public CDialog
{
// Construction
public:
	CMy111Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMy111Dlg)
	enum { IDD = IDD_MY111_DIALOG };
	CButton	m_switch2;
	CCWButton	m_kaiguan;
	CCWButton	m_switch;
	CCWButton	m_cwButton;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy111Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMy111Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnValueChangedCwboolean1(BOOL Value);
	afx_msg void OnValueChangedCwboolean2(BOOL Value);
	afx_msg void OnValueChangedCwboolean6(BOOL Value);
	DECLARE_EVENTSINK_MAP()
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_111DLG_H__F4C88520_954A_45DA_A18D_69B1A738FAA8__INCLUDED_)
