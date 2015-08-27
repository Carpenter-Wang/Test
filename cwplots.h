#if !defined(AFX_CWPLOTS_H__21E8B056_5286_4B25_99C8_E8CC124B4E94__INCLUDED_)
#define AFX_CWPLOTS_H__21E8B056_5286_4B25_99C8_E8CC124B4E94__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CCWPlot;

/////////////////////////////////////////////////////////////////////////////
// CCWPlots wrapper class

class CCWPlots : public COleDispatchDriver
{
public:
	CCWPlots() {}		// Calls COleDispatchDriver default constructor
	CCWPlots(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CCWPlots(const CCWPlots& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetCount();
	void SetCount(short);

// Operations
public:
	CCWPlot Item(const VARIANT& Item);
	LPUNKNOWN _NewEnum();
	void Remove(const VARIANT& Element);
	void RemoveAll();
	CCWPlot Add();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CWPLOTS_H__21E8B056_5286_4B25_99C8_E8CC124B4E94__INCLUDED_)
