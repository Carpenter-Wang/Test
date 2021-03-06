// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "cwcontour.h"

// Dispatch interfaces referenced by this interface
#include "fontdisp.h"


/////////////////////////////////////////////////////////////////////////////
// CCWContour properties

double CCWContour::GetLevel()
{
	double result;
	GetProperty(0x1, VT_R8, (void*)&result);
	return result;
}

void CCWContour::SetLevel(double propVal)
{
	SetProperty(0x1, VT_R8, propVal);
}

unsigned long CCWContour::GetLineColor()
{
	unsigned long result;
	GetProperty(0x2, VT_I4, (void*)&result);
	return result;
}

void CCWContour::SetLineColor(unsigned long propVal)
{
	SetProperty(0x2, VT_I4, propVal);
}

long CCWContour::GetLineStyle()
{
	long result;
	GetProperty(0x3, VT_I4, (void*)&result);
	return result;
}

void CCWContour::SetLineStyle(long propVal)
{
	SetProperty(0x3, VT_I4, propVal);
}

double CCWContour::GetLineWidth()
{
	double result;
	GetProperty(0x4, VT_R8, (void*)&result);
	return result;
}

void CCWContour::SetLineWidth(double propVal)
{
	SetProperty(0x4, VT_R8, propVal);
}

CString CCWContour::GetLabelFormat()
{
	CString result;
	GetProperty(0x5, VT_BSTR, (void*)&result);
	return result;
}

void CCWContour::SetLabelFormat(LPCTSTR propVal)
{
	SetProperty(0x5, VT_BSTR, propVal);
}

unsigned long CCWContour::GetLabelColor()
{
	unsigned long result;
	GetProperty(0x6, VT_I4, (void*)&result);
	return result;
}

void CCWContour::SetLabelColor(unsigned long propVal)
{
	SetProperty(0x6, VT_I4, propVal);
}

CFontDisp CCWContour::GetLabelFont()
{
	LPDISPATCH pDispatch;
	GetProperty(0x7, VT_DISPATCH, (void*)&pDispatch);
	return CFontDisp(pDispatch);
}

void CCWContour::SetLabelFont(LPDISPATCH propVal)
{
	SetProperty(0x7, VT_DISPATCH, propVal);
}

BOOL CCWContour::GetLabelVisible()
{
	BOOL result;
	GetProperty(0x8, VT_BOOL, (void*)&result);
	return result;
}

void CCWContour::SetLabelVisible(BOOL propVal)
{
	SetProperty(0x8, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CCWContour operations
