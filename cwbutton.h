#if !defined(AFX_CWBUTTON_H__FB7BD9F2_5AE2_48FB_B504_37588EF1F466__INCLUDED_)
#define AFX_CWBUTTON_H__FB7BD9F2_5AE2_48FB_B504_37588EF1F466__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CFontDisp;
class CCWPictureDisp;
class CCWImage;
class CPictureDisp;
class CCWBindings;

/////////////////////////////////////////////////////////////////////////////
// CCWButton wrapper class

class CCWButton : public CWnd
{
protected:
	DECLARE_DYNCREATE(CCWButton)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0xd940e4be, 0x6079, 0x11ce, { 0x88, 0xcb, 0x0, 0x20, 0xaf, 0x68, 0x45, 0xf6 } };
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
	BOOL GetEnabled();
	void SetEnabled(BOOL);
	CFontDisp GetFont();
	void SetFont(LPDISPATCH);
	OLE_COLOR GetBackColor();
	void SetBackColor(OLE_COLOR);
	long GetMode();
	void SetMode(long);
	CString GetCaption();
	void SetCaption(LPCTSTR);
	BOOL GetValue();
	void SetValue(BOOL);
	CString GetOnText();
	void SetOnText(LPCTSTR);
	CString GetOffText();
	void SetOffText(LPCTSTR);
	unsigned long GetOnColor();
	void SetOnColor(unsigned long);
	unsigned long GetOffColor();
	void SetOffColor(unsigned long);
	unsigned long GetOnTextColor();
	void SetOnTextColor(unsigned long);
	unsigned long GetOffTextColor();
	void SetOffTextColor(unsigned long);
	unsigned long GetCaptionColor();
	void SetCaptionColor(unsigned long);
	CCWPictureDisp GetOnImage();
	void SetOnImage(LPDISPATCH);
	CCWPictureDisp GetOffImage();
	void SetOffImage(LPDISPATCH);
	BOOL GetImmediateUpdates();
	void SetImmediateUpdates(BOOL);
	long GetShowFocusMode();
	void SetShowFocusMode(long);
	CCWPictureDisp GetBackgroundImage();
	void SetBackgroundImage(LPDISPATCH);
	BOOL GetWindowless();
	void SetWindowless(BOOL);
	long GetReadyState();
	void SetReadyState(long);
	long GetKeyboardMode();
	void SetKeyboardMode(long);

// Operations
public:
	void SetBuiltinStyle(long Style);
	void AboutBox();
	void ImportStyle(LPCTSTR FileName);
	void ExportStyle(LPCTSTR FileName);
	CCWImage OnImages(const VARIANT& Item);
	CCWImage OffImages(const VARIANT& Item);
	CPictureDisp ControlImage();
	void Refresh();
	CCWBindings GetCWBindings();
	CPictureDisp ControlImageEx(long dpiX, long dpiY);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CWBUTTON_H__FB7BD9F2_5AE2_48FB_B504_37588EF1F466__INCLUDED_)