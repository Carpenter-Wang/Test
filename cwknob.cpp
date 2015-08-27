// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "cwknob.h"

// Dispatch interfaces referenced by this interface
#include "cwpointer.h"
#include "fontdisp.h"
#include "CWStatistics.h"
#include "cwpicturedisp.h"
#include "cwaxis.h"
#include "cwpointers.h"
#include "cwimage.h"
#include "picturedisp.h"
#include "cwbindings.h"

/////////////////////////////////////////////////////////////////////////////
// CCWKnob

IMPLEMENT_DYNCREATE(CCWKnob, CWnd)

/////////////////////////////////////////////////////////////////////////////
// CCWKnob properties

CCWPointer CCWKnob::GetActivePointer()
{
	LPDISPATCH pDispatch;
	GetProperty(0x105, VT_DISPATCH, (void*)&pDispatch);
	return CCWPointer(pDispatch);
}

void CCWKnob::SetActivePointer(LPDISPATCH propVal)
{
	SetProperty(0x105, VT_DISPATCH, propVal);
}

CString CCWKnob::GetCaption()
{
	CString result;
	GetProperty(DISPID_CAPTION, VT_BSTR, (void*)&result);
	return result;
}

void CCWKnob::SetCaption(LPCTSTR propVal)
{
	SetProperty(DISPID_CAPTION, VT_BSTR, propVal);
}

CFontDisp CCWKnob::GetFont()
{
	LPDISPATCH pDispatch;
	GetProperty(DISPID_FONT, VT_DISPATCH, (void*)&pDispatch);
	return CFontDisp(pDispatch);
}

void CCWKnob::SetFont(LPDISPATCH propVal)
{
	SetProperty(DISPID_FONT, VT_DISPATCH, propVal);
}

unsigned long CCWKnob::GetCaptionColor()
{
	unsigned long result;
	GetProperty(0x107, VT_I4, (void*)&result);
	return result;
}

void CCWKnob::SetCaptionColor(unsigned long propVal)
{
	SetProperty(0x107, VT_I4, propVal);
}

long CCWKnob::GetReadyState()
{
	long result;
	GetProperty(DISPID_READYSTATE, VT_I4, (void*)&result);
	return result;
}

void CCWKnob::SetReadyState(long propVal)
{
	SetProperty(DISPID_READYSTATE, VT_I4, propVal);
}

BOOL CCWKnob::GetEnabled()
{
	BOOL result;
	GetProperty(DISPID_ENABLED, VT_BOOL, (void*)&result);
	return result;
}

void CCWKnob::SetEnabled(BOOL propVal)
{
	SetProperty(DISPID_ENABLED, VT_BOOL, propVal);
}

CCWStatistics CCWKnob::GetStatistics()
{
	LPDISPATCH pDispatch;
	GetProperty(0x103, VT_DISPATCH, (void*)&pDispatch);
	return CCWStatistics(pDispatch);
}

void CCWKnob::SetStatistics(LPDISPATCH propVal)
{
	SetProperty(0x103, VT_DISPATCH, propVal);
}

OLE_COLOR CCWKnob::GetBackColor()
{
	OLE_COLOR result;
	GetProperty(DISPID_BACKCOLOR, VT_I4, (void*)&result);
	return result;
}

void CCWKnob::SetBackColor(OLE_COLOR propVal)
{
	SetProperty(DISPID_BACKCOLOR, VT_I4, propVal);
}

long CCWKnob::GetValuePairIndex()
{
	long result;
	GetProperty(0x106, VT_I4, (void*)&result);
	return result;
}

void CCWKnob::SetValuePairIndex(long propVal)
{
	SetProperty(0x106, VT_I4, propVal);
}

VARIANT CCWKnob::GetValue()
{
	VARIANT result;
	GetProperty(0x101, VT_VARIANT, (void*)&result);
	return result;
}

void CCWKnob::SetValue(const VARIANT& propVal)
{
	SetProperty(0x101, VT_VARIANT, &propVal);
}

OLE_COLOR CCWKnob::GetForeColor()
{
	OLE_COLOR result;
	GetProperty(DISPID_FORECOLOR, VT_I4, (void*)&result);
	return result;
}

void CCWKnob::SetForeColor(OLE_COLOR propVal)
{
	SetProperty(DISPID_FORECOLOR, VT_I4, propVal);
}

BOOL CCWKnob::GetImmediateUpdates()
{
	BOOL result;
	GetProperty(0x10a, VT_BOOL, (void*)&result);
	return result;
}

void CCWKnob::SetImmediateUpdates(BOOL propVal)
{
	SetProperty(0x10a, VT_BOOL, propVal);
}

long CCWKnob::GetShowFocusMode()
{
	long result;
	GetProperty(0x108, VT_I4, (void*)&result);
	return result;
}

void CCWKnob::SetShowFocusMode(long propVal)
{
	SetProperty(0x108, VT_I4, propVal);
}

CCWPictureDisp CCWKnob::GetBackgroundImage()
{
	LPDISPATCH pDispatch;
	GetProperty(0x10c, VT_DISPATCH, (void*)&pDispatch);
	return CCWPictureDisp(pDispatch);
}

void CCWKnob::SetBackgroundImage(LPDISPATCH propVal)
{
	SetProperty(0x10c, VT_DISPATCH, propVal);
}

BOOL CCWKnob::GetWindowless()
{
	BOOL result;
	GetProperty(0x10d, VT_BOOL, (void*)&result);
	return result;
}

void CCWKnob::SetWindowless(BOOL propVal)
{
	SetProperty(0x10d, VT_BOOL, propVal);
}

VARIANT CCWKnob::GetIncDecValue()
{
	VARIANT result;
	GetProperty(0x110, VT_VARIANT, (void*)&result);
	return result;
}

void CCWKnob::SetIncDecValue(const VARIANT& propVal)
{
	SetProperty(0x110, VT_VARIANT, &propVal);
}

long CCWKnob::GetKeyboardMode()
{
	long result;
	GetProperty(0x111, VT_I4, (void*)&result);
	return result;
}

void CCWKnob::SetKeyboardMode(long propVal)
{
	SetProperty(0x111, VT_I4, propVal);
}

BOOL CCWKnob::GetValuePairsOnly()
{
	BOOL result;
	GetProperty(0x120, VT_BOOL, (void*)&result);
	return result;
}

void CCWKnob::SetValuePairsOnly(BOOL propVal)
{
	SetProperty(0x120, VT_BOOL, propVal);
}

double CCWKnob::GetArcStart()
{
	double result;
	GetProperty(0x112, VT_R8, (void*)&result);
	return result;
}

void CCWKnob::SetArcStart(double propVal)
{
	SetProperty(0x112, VT_R8, propVal);
}

double CCWKnob::GetArcEnd()
{
	double result;
	GetProperty(0x113, VT_R8, (void*)&result);
	return result;
}

void CCWKnob::SetArcEnd(double propVal)
{
	SetProperty(0x113, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CCWKnob operations

CCWAxis CCWKnob::GetAxis()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x102, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CCWAxis(pDispatch);
}

CCWPointers CCWKnob::GetPointers()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x104, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CCWPointers(pDispatch);
}

void CCWKnob::AboutBox()
{
	InvokeHelper(0xfffffdd8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCWKnob::ImportStyle(LPCTSTR FileName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x202, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName);
}

void CCWKnob::ExportStyle(LPCTSTR FileName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x201, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName);
}

CCWImage CCWKnob::Images(const VARIANT& Item)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x10e, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		&Item);
	return CCWImage(pDispatch);
}

CPictureDisp CCWKnob::ControlImage()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x10f, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPictureDisp(pDispatch);
}

void CCWKnob::Refresh()
{
	InvokeHelper(DISPID_REFRESH, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCWKnob::SetBuiltinStyle(long Style)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x10b, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Style);
}

CCWBindings CCWKnob::GetCWBindings()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x115, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CCWBindings(pDispatch);
}

CPictureDisp CCWKnob::ControlImageEx(long dpiX, long dpiY)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x121, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		dpiX, dpiY);
	return CPictureDisp(pDispatch);
}