// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "cwaxis3d.h"

// Dispatch interfaces referenced by this interface
#include "cwticks3d.h"
#include "cwlabels3d.h"
#include "fontdisp.h"
#include "cwvaluepairs.h"


/////////////////////////////////////////////////////////////////////////////
// CCWAxis3D properties

BOOL CCWAxis3D::GetLog()
{
	BOOL result;
	GetProperty(0x1, VT_BOOL, (void*)&result);
	return result;
}

void CCWAxis3D::SetLog(BOOL propVal)
{
	SetProperty(0x1, VT_BOOL, propVal);
}

VARIANT CCWAxis3D::GetMaximum()
{
	VARIANT result;
	GetProperty(0x2, VT_VARIANT, (void*)&result);
	return result;
}

void CCWAxis3D::SetMaximum(const VARIANT& propVal)
{
	SetProperty(0x2, VT_VARIANT, &propVal);
}

VARIANT CCWAxis3D::GetMinimum()
{
	VARIANT result;
	GetProperty(0x3, VT_VARIANT, (void*)&result);
	return result;
}

void CCWAxis3D::SetMinimum(const VARIANT& propVal)
{
	SetProperty(0x3, VT_VARIANT, &propVal);
}

BOOL CCWAxis3D::GetInverted()
{
	BOOL result;
	GetProperty(0x4, VT_BOOL, (void*)&result);
	return result;
}

void CCWAxis3D::SetInverted(BOOL propVal)
{
	SetProperty(0x4, VT_BOOL, propVal);
}

CString CCWAxis3D::GetName()
{
	CString result;
	GetProperty(0x5, VT_BSTR, (void*)&result);
	return result;
}

void CCWAxis3D::SetName(LPCTSTR propVal)
{
	SetProperty(0x5, VT_BSTR, propVal);
}

BOOL CCWAxis3D::GetAutoScale()
{
	BOOL result;
	GetProperty(0x6, VT_BOOL, (void*)&result);
	return result;
}

void CCWAxis3D::SetAutoScale(BOOL propVal)
{
	SetProperty(0x6, VT_BOOL, propVal);
}

CCWTicks3D CCWAxis3D::GetTicks()
{
	LPDISPATCH pDispatch;
	GetProperty(0x7, VT_DISPATCH, (void*)&pDispatch);
	return CCWTicks3D(pDispatch);
}

void CCWAxis3D::SetTicks(LPDISPATCH propVal)
{
	SetProperty(0x7, VT_DISPATCH, propVal);
}

CString CCWAxis3D::GetFormatString()
{
	CString result;
	GetProperty(0x8, VT_BSTR, (void*)&result);
	return result;
}

void CCWAxis3D::SetFormatString(LPCTSTR propVal)
{
	SetProperty(0x8, VT_BSTR, propVal);
}

CCWLabels3D CCWAxis3D::GetLabels()
{
	LPDISPATCH pDispatch;
	GetProperty(0x9, VT_DISPATCH, (void*)&pDispatch);
	return CCWLabels3D(pDispatch);
}

void CCWAxis3D::SetLabels(LPDISPATCH propVal)
{
	SetProperty(0x9, VT_DISPATCH, propVal);
}

BOOL CCWAxis3D::GetVisible()
{
	BOOL result;
	GetProperty(0xa, VT_BOOL, (void*)&result);
	return result;
}

void CCWAxis3D::SetVisible(BOOL propVal)
{
	SetProperty(0xa, VT_BOOL, propVal);
}

CString CCWAxis3D::GetCaption()
{
	CString result;
	GetProperty(0xb, VT_BSTR, (void*)&result);
	return result;
}

void CCWAxis3D::SetCaption(LPCTSTR propVal)
{
	SetProperty(0xb, VT_BSTR, propVal);
}

unsigned long CCWAxis3D::GetCaptionColor()
{
	unsigned long result;
	GetProperty(0xc, VT_I4, (void*)&result);
	return result;
}

void CCWAxis3D::SetCaptionColor(unsigned long propVal)
{
	SetProperty(0xc, VT_I4, propVal);
}

BOOL CCWAxis3D::GetCaptionNormal()
{
	BOOL result;
	GetProperty(0xd, VT_BOOL, (void*)&result);
	return result;
}

void CCWAxis3D::SetCaptionNormal(BOOL propVal)
{
	SetProperty(0xd, VT_BOOL, propVal);
}

BOOL CCWAxis3D::GetCaptionOpposite()
{
	BOOL result;
	GetProperty(0xe, VT_BOOL, (void*)&result);
	return result;
}

void CCWAxis3D::SetCaptionOpposite(BOOL propVal)
{
	SetProperty(0xe, VT_BOOL, propVal);
}

CFontDisp CCWAxis3D::GetCaptionFont()
{
	LPDISPATCH pDispatch;
	GetProperty(0xf, VT_DISPATCH, (void*)&pDispatch);
	return CFontDisp(pDispatch);
}

void CCWAxis3D::SetCaptionFont(LPDISPATCH propVal)
{
	SetProperty(0xf, VT_DISPATCH, propVal);
}

long CCWAxis3D::GetCaptionOrientationStyle()
{
	long result;
	GetProperty(0x13, VT_I4, (void*)&result);
	return result;
}

void CCWAxis3D::SetCaptionOrientationStyle(long propVal)
{
	SetProperty(0x13, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CCWAxis3D operations

void CCWAxis3D::SetMinMax(const VARIANT& Minimum, const VARIANT& Maximum)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x10, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Minimum, &Maximum);
}

CCWValuePairs CCWAxis3D::GetValuePairs()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CCWValuePairs(pDispatch);
}

void CCWAxis3D::AutoScaleNow()
{
	InvokeHelper(0x12, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}
