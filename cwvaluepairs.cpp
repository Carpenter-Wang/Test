// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "cwvaluepairs.h"

// Dispatch interfaces referenced by this interface
#include "cwvaluepair.h"


/////////////////////////////////////////////////////////////////////////////
// CCWValuePairs properties

short CCWValuePairs::GetCount()
{
	short result;
	GetProperty(0x100, VT_I2, (void*)&result);
	return result;
}

void CCWValuePairs::SetCount(short propVal)
{
	SetProperty(0x100, VT_I2, propVal);
}

long CCWValuePairs::GetLabelType()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void CCWValuePairs::SetLabelType(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

long CCWValuePairs::GetLocation()
{
	long result;
	GetProperty(0x2, VT_I4, (void*)&result);
	return result;
}

void CCWValuePairs::SetLocation(long propVal)
{
	SetProperty(0x2, VT_I4, propVal);
}

BOOL CCWValuePairs::GetMajorTicks()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void CCWValuePairs::SetMajorTicks(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

BOOL CCWValuePairs::GetGridLines()
{
	BOOL result;
	GetProperty(0x4, VT_BOOL, (void*)&result);
	return result;
}

void CCWValuePairs::SetGridLines(BOOL propVal)
{
	SetProperty(0x4, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CCWValuePairs operations

CCWValuePair CCWValuePairs::Item(const VARIANT& Item)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		&Item);
	return CCWValuePair(pDispatch);
}

LPUNKNOWN CCWValuePairs::_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

void CCWValuePairs::Remove(const VARIANT& Element)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x101, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Element);
}

void CCWValuePairs::RemoveAll()
{
	InvokeHelper(0x103, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

CCWValuePair CCWValuePairs::Add()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x102, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CCWValuePair(pDispatch);
}

void CCWValuePairs::Swap(const VARIANT& element1, const VARIANT& element2)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &element1, &element2);
}
