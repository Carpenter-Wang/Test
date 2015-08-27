// 111Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "111.h"
#include "111Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy111Dlg dialog

CMy111Dlg::CMy111Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMy111Dlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMy111Dlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMy111Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMy111Dlg)
	DDX_Control(pDX, IDC_BUTTON1, m_switch2);
	DDX_Control(pDX, IDC_CWBOOLEAN1, m_kaiguan);
	DDX_Control(pDX, IDC_CWBOOLEAN2, m_switch);
	DDX_Control(pDX, IDC_CWBOOLEAN5, m_cwButton);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMy111Dlg, CDialog)
	//{{AFX_MSG_MAP(CMy111Dlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy111Dlg message handlers

BOOL CMy111Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMy111Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMy111Dlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMy111Dlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

BEGIN_EVENTSINK_MAP(CMy111Dlg, CDialog)
    //{{AFX_EVENTSINK_MAP(CMy111Dlg)
	ON_EVENT(CMy111Dlg, IDC_CWBOOLEAN1, 1 /* ValueChanged */, OnValueChangedCwboolean1, VTS_BOOL)
	ON_EVENT(CMy111Dlg, IDC_CWBOOLEAN2, 1 /* ValueChanged */, OnValueChangedCwboolean2, VTS_BOOL)
	ON_EVENT(CMy111Dlg, IDC_CWBOOLEAN6, 1 /* ValueChanged */, OnValueChangedCwboolean6, VTS_BOOL)
	//}}AFX_EVENTSINK_MAP
END_EVENTSINK_MAP()

void CMy111Dlg::OnValueChangedCwboolean1(BOOL Value) 
{
	// TODO: Add your control notification handler code here
    UpdateData(false);
	if (m_kaiguan)
	{
	 SetWindowText("kaile!");
	}
    if (!m_kaiguan)
    {
		SetWindowText("guanle");
    }
}

void CMy111Dlg::OnValueChangedCwboolean2(BOOL Value) 
{
	// TODO: Add your control notification handler code here
	if (m_switch.GetValue())
	{
       SetWindowText("����");
	   //m_switch2.SetValue(true);
	}
	if (! m_switch.GetValue())
	{
       SetWindowText("����");
	   //m_switch2.SetValue(true);
	}

	
}

void CMy111Dlg::OnValueChangedCwboolean6(BOOL Value) 
{
	// TODO: Add your control notification handler code here
	m_cwButton.SetValue(Value);
}