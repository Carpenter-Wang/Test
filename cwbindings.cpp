// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "cwbindings.h"

// Dispatch interfaces referenced by this interface
#include "cwbinding.h"


/////////////////////////////////////////////////////////////////////////////
// CCWBindings properties

short CCWBindings::GetCount()
{
	short result;
	GetProperty(0x100, VT_I2, (void*)&result);
	return result;
}

void CCWBindings::SetCount(short propVal)
{
	SetProperty(0x100, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CCWBindings operations

CCWBinding CCWBindings::Item(const VARIANT& Item)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		&Item);
	return CCWBinding(pDispatch);
}

LPUNKNOWN CCWBindings::_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

void CCWBindings::Remove(const VARIANT& Element)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x101, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Element);
}

void CCWBindings::RemoveAll()
{
	InvokeHelper(0x103, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

CCWBinding CCWBindings::Add()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x102, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CCWBinding(pDispatch);
}