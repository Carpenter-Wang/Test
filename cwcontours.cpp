// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "cwcontours.h"

// Dispatch interfaces referenced by this interface
#include "CWContour.h"


/////////////////////////////////////////////////////////////////////////////
// CCWContours properties

short CCWContours::GetCount()
{
	short result;
	GetProperty(0x100, VT_I2, (void*)&result);
	return result;
}

void CCWContours::SetCount(short propVal)
{
	SetProperty(0x100, VT_I2, propVal);
}

BOOL CCWContours::GetAnchorEnabled()
{
	BOOL result;
	GetProperty(0x1, VT_BOOL, (void*)&result);
	return result;
}

void CCWContours::SetAnchorEnabled(BOOL propVal)
{
	SetProperty(0x1, VT_BOOL, propVal);
}

double CCWContours::GetAnchor()
{
	double result;
	GetProperty(0x2, VT_R8, (void*)&result);
	return result;
}

void CCWContours::SetAnchor(double propVal)
{
	SetProperty(0x2, VT_R8, propVal);
}

long CCWContours::GetBasis()
{
	long result;
	GetProperty(0x3, VT_I4, (void*)&result);
	return result;
}

void CCWContours::SetBasis(long propVal)
{
	SetProperty(0x3, VT_I4, propVal);
}

double CCWContours::GetInterval()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void CCWContours::SetInterval(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

VARIANT CCWContours::GetLevelList()
{
	VARIANT result;
	GetProperty(0x5, VT_VARIANT, (void*)&result);
	return result;
}

void CCWContours::SetLevelList(const VARIANT& propVal)
{
	SetProperty(0x5, VT_VARIANT, &propVal);
}

long CCWContours::GetLevels()
{
	long result;
	GetProperty(0x6, VT_I4, (void*)&result);
	return result;
}

void CCWContours::SetLevels(long propVal)
{
	SetProperty(0x6, VT_I4, propVal);
}

long CCWContours::GetLabelOrientationStyle()
{
	long result;
	GetProperty(0xf, VT_I4, (void*)&result);
	return result;
}

void CCWContours::SetLabelOrientationStyle(long propVal)
{
	SetProperty(0xf, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CCWContours operations

CCWContour CCWContours::Item(const VARIANT& Item)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		&Item);
	return CCWContour(pDispatch);
}

LPUNKNOWN CCWContours::_NewEnum()
{
	LPUNKNOWN result;
	InvokeHelper(0xfffffffc, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

void CCWContours::Remove(const VARIANT& Element)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x101, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Element);
}

void CCWContours::RemoveAll()
{
	InvokeHelper(0x103, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCWContours::SetLineColor(unsigned long LineColor)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 LineColor);
}

void CCWContours::SetLineStyle(long LineStyle)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 LineStyle);
}

void CCWContours::SetLineWidth(double LineWidth)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 LineWidth);
}

void CCWContours::SetLabelFormat(LPCTSTR Label)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Label);
}

void CCWContours::SetLabelColor(unsigned long LabelColor)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 LabelColor);
}

void CCWContours::SetLabelFont(LPDISPATCH LabelFont)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 LabelFont);
}

void CCWContours::SetLabelVisible(BOOL LabelVisible)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 LabelVisible);
}

void CCWContours::Add(double Level)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Level);
}
