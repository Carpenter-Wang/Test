#if !defined(AFX_CWNUMEDIT_H__AE9123BB_7D7C_4BB2_ABC7_8054A9C46FF5__INCLUDED_)
#define AFX_CWNUMEDIT_H__AE9123BB_7D7C_4BB2_ABC7_8054A9C46FF5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CFontDisp;
class CPictureDisp;
class CCWBindings;

/////////////////////////////////////////////////////////////////////////////
// CCWNumEdit wrapper class

class CCWNumEdit : public CWnd
{
protected:
	DECLARE_DYNCREATE(CCWNumEdit)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x17301da3, 0xc84d, 0x11cf, { 0xae, 0x6f, 0x0, 0x20, 0xaf, 0x31, 0xce, 0xf9 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:
	CFontDisp GetFont();
	void SetFont(LPDISPATCH);
	BOOL GetEnabled();
	void SetEnabled(BOOL);
	VARIANT GetValue();
	void SetValue(const VARIANT&);
	long GetMode();
	void SetMode(long);
	BOOL GetIncDecButtonVisible();
	void SetIncDecButtonVisible(BOOL);
	VARIANT GetIncDecValue();
	void SetIncDecValue(const VARIANT&);
	VARIANT GetMinimum();
	void SetMinimum(const VARIANT&);
	VARIANT GetMaximum();
	void SetMaximum(const VARIANT&);
	long GetAccelTime();
	void SetAccelTime(long);
	VARIANT GetAccelInc();
	void SetAccelInc(const VARIANT&);
	unsigned long GetBackColorText();
	void SetBackColorText(unsigned long);
	unsigned long GetForeColorText();
	void SetForeColorText(unsigned long);
	long GetIncDecButtonPosition();
	void SetIncDecButtonPosition(long);
	long GetAlignment();
	void SetAlignment(long);
	long GetAppearance();
	void SetAppearance(long);
	long GetBorderStyle();
	void SetBorderStyle(long);
	BOOL GetRangeChecking();
	void SetRangeChecking(BOOL);
	CString GetFormatString();
	void SetFormatString(LPCTSTR);
	CString GetText();
	void SetText(LPCTSTR);
	BOOL GetDiscrete();
	void SetDiscrete(BOOL);
	VARIANT GetDiscreteInterval();
	void SetDiscreteInterval(const VARIANT&);
	VARIANT GetDiscreteBase();
	void SetDiscreteBase(const VARIANT&);
	long GetButtonStyle();
	void SetButtonStyle(long);
	unsigned long GetButtonColor();
	void SetButtonColor(unsigned long);
	OLE_COLOR GetBackColor();
	void SetBackColor(OLE_COLOR);

// Operations
public:
	void SetMinMax(const VARIANT& Minimum, const VARIANT& Maximum);
	void ImportStyle(LPCTSTR FileName);
	void ExportStyle(LPCTSTR FileName);
	CPictureDisp ControlImage();
	void AboutBox();
	CCWBindings GetCWBindings();
	CPictureDisp ControlImageEx(long dpiX, long dpiY);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CWNUMEDIT_H__AE9123BB_7D7C_4BB2_ABC7_8054A9C46FF5__INCLUDED_)
