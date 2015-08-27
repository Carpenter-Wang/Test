// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "cwshape.h"


/////////////////////////////////////////////////////////////////////////////
// CCWShape properties

long CCWShape::GetType()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void CCWShape::SetType(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

VARIANT CCWShape::GetXCoordinates()
{
	VARIANT result;
	GetProperty(0x2, VT_VARIANT, (void*)&result);
	return result;
}

void CCWShape::SetXCoordinates(const VARIANT& propVal)
{
	SetProperty(0x2, VT_VARIANT, &propVal);
}

VARIANT CCWShape::GetYCoordinates()
{
	VARIANT result;
	GetProperty(0x3, VT_VARIANT, (void*)&result);
	return result;
}

void CCWShape::SetYCoordinates(const VARIANT& propVal)
{
	SetProperty(0x3, VT_VARIANT, &propVal);
}

unsigned long CCWShape::GetColor()
{
	unsigned long result;
	GetProperty(0x4, VT_I4, (void*)&result);
	return result;
}

void CCWShape::SetColor(unsigned long propVal)
{
	SetProperty(0x4, VT_I4, propVal);
}

BOOL CCWShape::GetFillVisible()
{
	BOOL result;
	GetProperty(0x5, VT_BOOL, (void*)&result);
	return result;
}

void CCWShape::SetFillVisible(BOOL propVal)
{
	SetProperty(0x5, VT_BOOL, propVal);
}

unsigned long CCWShape::GetLineColor()
{
	unsigned long result;
	GetProperty(0x6, VT_I4, (void*)&result);
	return result;
}

void CCWShape::SetLineColor(unsigned long propVal)
{
	SetProperty(0x6, VT_I4, propVal);
}

short CCWShape::GetLineWidth()
{
	short result;
	GetProperty(0x7, VT_I2, (void*)&result);
	return result;
}

void CCWShape::SetLineWidth(short propVal)
{
	SetProperty(0x7, VT_I2, propVal);
}

long CCWShape::GetLineStyle()
{
	long result;
	GetProperty(0x8, VT_I4, (void*)&result);
	return result;
}

void CCWShape::SetLineStyle(long propVal)
{
	SetProperty(0x8, VT_I4, propVal);
}

long CCWShape::GetPointStyle()
{
	long result;
	GetProperty(0x9, VT_I4, (void*)&result);
	return result;
}

void CCWShape::SetPointStyle(long propVal)
{
	SetProperty(0x9, VT_I4, propVal);
}

LPDISPATCH CCWShape::GetImage()
{
	LPDISPATCH result;
	GetProperty(0xa, VT_DISPATCH, (void*)&result);
	return result;
}

void CCWShape::SetImage(LPDISPATCH propVal)
{
	SetProperty(0xa, VT_DISPATCH, propVal);
}

long CCWShape::GetRegionArea()
{
	long result;
	GetProperty(0xb, VT_I4, (void*)&result);
	return result;
}

void CCWShape::SetRegionArea(long propVal)
{
	SetProperty(0xb, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CCWShape operations

void CCWShape::SetCoordinates(const VARIANT& XCoordinates, const VARIANT& YCoordinates)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &XCoordinates, &YCoordinates);
}
