#if !defined(AFX_CWCURSORS3D_H__AE35316A_009B_4AC6_89E9_9A3B0C20E2AE__INCLUDED_)
#define AFX_CWCURSORS3D_H__AE35316A_009B_4AC6_89E9_9A3B0C20E2AE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CCWCursor3D;

/////////////////////////////////////////////////////////////////////////////
// CCWCursors3D wrapper class

class CCWCursors3D : public COleDispatchDriver
{
public:
	CCWCursors3D() {}		// Calls COleDispatchDriver default constructor
	CCWCursors3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CCWCursors3D(const CCWCursors3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetCount();
	void SetCount(short);

// Operations
public:
	CCWCursor3D Item(const VARIANT& Item);
	LPUNKNOWN _NewEnum();
	void Remove(const VARIANT& Element);
	void RemoveAll();
	CCWCursor3D Add();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CWCURSORS3D_H__AE35316A_009B_4AC6_89E9_9A3B0C20E2AE__INCLUDED_)
