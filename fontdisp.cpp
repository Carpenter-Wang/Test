// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "fontdisp.h"


/////////////////////////////////////////////////////////////////////////////
// CFontDisp properties

CString CFontDisp::GetName()
{
	CString result;
	GetProperty(0x0, VT_BSTR, (void*)&result);
	return result;
}

void CFontDisp::SetName(LPCTSTR propVal)
{
	SetProperty(0x0, VT_BSTR, propVal);
}

CY CFontDisp::GetSize()
{
	CY result;
	GetProperty(0x2, VT_CY, (void*)&result);
	return result;
}

void CFontDisp::SetSize(const CY& propVal)
{
	SetProperty(0x2, VT_CY, &propVal);
}

BOOL CFontDisp::GetBold()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void CFontDisp::SetBold(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

BOOL CFontDisp::GetItalic()
{
	BOOL result;
	GetProperty(0x4, VT_BOOL, (void*)&result);
	return result;
}

void CFontDisp::SetItalic(BOOL propVal)
{
	SetProperty(0x4, VT_BOOL, propVal);
}

BOOL CFontDisp::GetUnderline()
{
	BOOL result;
	GetProperty(0x5, VT_BOOL, (void*)&result);
	return result;
}

void CFontDisp::SetUnderline(BOOL propVal)
{
	SetProperty(0x5, VT_BOOL, propVal);
}

BOOL CFontDisp::GetStrikethrough()
{
	BOOL result;
	GetProperty(0x6, VT_BOOL, (void*)&result);
	return result;
}

void CFontDisp::SetStrikethrough(BOOL propVal)
{
	SetProperty(0x6, VT_BOOL, propVal);
}

short CFontDisp::GetWeight()
{
	short result;
	GetProperty(0x7, VT_I2, (void*)&result);
	return result;
}

void CFontDisp::SetWeight(short propVal)
{
	SetProperty(0x7, VT_I2, propVal);
}

short CFontDisp::GetCharset()
{
	short result;
	GetProperty(0x8, VT_I2, (void*)&result);
	return result;
}

void CFontDisp::SetCharset(short propVal)
{
	SetProperty(0x8, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CFontDisp operations