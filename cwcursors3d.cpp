// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "cwcursors3d.h"

// Dispatch interfaces referenced by this interface
#include "cwcursor3d.h"


/////////////////////////////////////////////////////////////////////////////
// CCWCursors3D properties

short CCWCursors3D::GetCount()
{
	short result;
	GetProperty(0x100, VT_I2, (void*)&result);
	return result;
}

void CCWCursors3D::SetCount(short propVal)
{
	SetProperty(0x100, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CCWCursors3D operations

CCWCursor3D CCWCursors3D::Item(const VARIANT& Item)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		&Item);
	return CCWCursor3D(pDispatch);
}

LPUNKNOWN CCWCursors3D::_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

void CCWCursors3D::Remove(const VARIANT& Element)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x101, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Element);
}

void CCWCursors3D::RemoveAll()
{
	InvokeHelper(0x103, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

CCWCursor3D CCWCursors3D::Add()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x102, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CCWCursor3D(pDispatch);
}
