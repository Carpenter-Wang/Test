#if !defined(AFX_CWSHAPE_H__AE4C37A5_6AB0_41AA_B02C_94E47E538B8E__INCLUDED_)
#define AFX_CWSHAPE_H__AE4C37A5_6AB0_41AA_B02C_94E47E538B8E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CCWShape wrapper class

class CCWShape : public COleDispatchDriver
{
public:
	CCWShape() {}		// Calls COleDispatchDriver default constructor
	CCWShape(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CCWShape(const CCWShape& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetType();
	void SetType(long);
	VARIANT GetXCoordinates();
	void SetXCoordinates(const VARIANT&);
	VARIANT GetYCoordinates();
	void SetYCoordinates(const VARIANT&);
	unsigned long GetColor();
	void SetColor(unsigned long);
	BOOL GetFillVisible();
	void SetFillVisible(BOOL);
	unsigned long GetLineColor();
	void SetLineColor(unsigned long);
	short GetLineWidth();
	void SetLineWidth(short);
	long GetLineStyle();
	void SetLineStyle(long);
	long GetPointStyle();
	void SetPointStyle(long);
	LPDISPATCH GetImage();
	void SetImage(LPDISPATCH);
	long GetRegionArea();
	void SetRegionArea(long);

// Operations
public:
	void SetCoordinates(const VARIANT& XCoordinates, const VARIANT& YCoordinates);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CWSHAPE_H__AE4C37A5_6AB0_41AA_B02C_94E47E538B8E__INCLUDED_)
