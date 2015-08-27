// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "cwticks.h"


/////////////////////////////////////////////////////////////////////////////
// CCWTicks properties

BOOL CCWTicks::GetAbove()
{
	BOOL result;
	GetProperty(0x1, VT_BOOL, (void*)&result);
	return result;
}

void CCWTicks::SetAbove(BOOL propVal)
{
	SetProperty(0x1, VT_BOOL, propVal);
}

BOOL CCWTicks::GetBelow()
{
	BOOL result;
	GetProperty(0x2, VT_BOOL, (void*)&result);
	return result;
}

void CCWTicks::SetBelow(BOOL propVal)
{
	SetProperty(0x2, VT_BOOL, propVal);
}

BOOL CCWTicks::GetLeft()
{
	BOOL result;
	GetProperty(0x3, VT_BOOL, (void*)&result);
	return result;
}

void CCWTicks::SetLeft(BOOL propVal)
{
	SetProperty(0x3, VT_BOOL, propVal);
}

BOOL CCWTicks::GetRight()
{
	BOOL result;
	GetProperty(0x4, VT_BOOL, (void*)&result);
	return result;
}

void CCWTicks::SetRight(BOOL propVal)
{
	SetProperty(0x4, VT_BOOL, propVal);
}

BOOL CCWTicks::GetInside()
{
	BOOL result;
	GetProperty(0x5, VT_BOOL, (void*)&result);
	return result;
}

void CCWTicks::SetInside(BOOL propVal)
{
	SetProperty(0x5, VT_BOOL, propVal);
}

BOOL CCWTicks::GetOutside()
{
	BOOL result;
	GetProperty(0x6, VT_BOOL, (void*)&result);
	return result;
}

void CCWTicks::SetOutside(BOOL propVal)
{
	SetProperty(0x6, VT_BOOL, propVal);
}

VARIANT CCWTicks::GetMajorDivisions()
{
	VARIANT result;
	GetProperty(0x7, VT_VARIANT, (void*)&result);
	return result;
}

void CCWTicks::SetMajorDivisions(const VARIANT& propVal)
{
	SetProperty(0x7, VT_VARIANT, &propVal);
}

VARIANT CCWTicks::GetMinorDivisions()
{
	VARIANT result;
	GetProperty(0x8, VT_VARIANT, (void*)&result);
	return result;
}

void CCWTicks::SetMinorDivisions(const VARIANT& propVal)
{
	SetProperty(0x8, VT_VARIANT, &propVal);
}

BOOL CCWTicks::GetAutoDivisions()
{
	BOOL result;
	GetProperty(0x9, VT_BOOL, (void*)&result);
	return result;
}

void CCWTicks::SetAutoDivisions(BOOL propVal)
{
	SetProperty(0x9, VT_BOOL, propVal);
}

VARIANT CCWTicks::GetMajorUnitsInterval()
{
	VARIANT result;
	GetProperty(0xa, VT_VARIANT, (void*)&result);
	return result;
}

void CCWTicks::SetMajorUnitsInterval(const VARIANT& propVal)
{
	SetProperty(0xa, VT_VARIANT, &propVal);
}

VARIANT CCWTicks::GetMajorUnitsBase()
{
	VARIANT result;
	GetProperty(0xb, VT_VARIANT, (void*)&result);
	return result;
}

void CCWTicks::SetMajorUnitsBase(const VARIANT& propVal)
{
	SetProperty(0xb, VT_VARIANT, &propVal);
}

VARIANT CCWTicks::GetMinorUnitsInterval()
{
	VARIANT result;
	GetProperty(0xc, VT_VARIANT, (void*)&result);
	return result;
}

void CCWTicks::SetMinorUnitsInterval(const VARIANT& propVal)
{
	SetProperty(0xc, VT_VARIANT, &propVal);
}

BOOL CCWTicks::GetMajorGrid()
{
	BOOL result;
	GetProperty(0xd, VT_BOOL, (void*)&result);
	return result;
}

void CCWTicks::SetMajorGrid(BOOL propVal)
{
	SetProperty(0xd, VT_BOOL, propVal);
}

BOOL CCWTicks::GetMinorGrid()
{
	BOOL result;
	GetProperty(0xe, VT_BOOL, (void*)&result);
	return result;
}

void CCWTicks::SetMinorGrid(BOOL propVal)
{
	SetProperty(0xe, VT_BOOL, propVal);
}

unsigned long CCWTicks::GetMajorGridColor()
{
	unsigned long result;
	GetProperty(0xf, VT_I4, (void*)&result);
	return result;
}

void CCWTicks::SetMajorGridColor(unsigned long propVal)
{
	SetProperty(0xf, VT_I4, propVal);
}

unsigned long CCWTicks::GetMinorGridColor()
{
	unsigned long result;
	GetProperty(0x10, VT_I4, (void*)&result);
	return result;
}

void CCWTicks::SetMinorGridColor(unsigned long propVal)
{
	SetProperty(0x10, VT_I4, propVal);
}

BOOL CCWTicks::GetMajorTicks()
{
	BOOL result;
	GetProperty(0x11, VT_BOOL, (void*)&result);
	return result;
}

void CCWTicks::SetMajorTicks(BOOL propVal)
{
	SetProperty(0x11, VT_BOOL, propVal);
}

BOOL CCWTicks::GetMinorTicks()
{
	BOOL result;
	GetProperty(0x12, VT_BOOL, (void*)&result);
	return result;
}

void CCWTicks::SetMinorTicks(BOOL propVal)
{
	SetProperty(0x12, VT_BOOL, propVal);
}

unsigned long CCWTicks::GetMajorTickColor()
{
	unsigned long result;
	GetProperty(0x13, VT_I4, (void*)&result);
	return result;
}

void CCWTicks::SetMajorTickColor(unsigned long propVal)
{
	SetProperty(0x13, VT_I4, propVal);
}

unsigned long CCWTicks::GetMinorTickColor()
{
	unsigned long result;
	GetProperty(0x14, VT_I4, (void*)&result);
	return result;
}

void CCWTicks::SetMinorTickColor(unsigned long propVal)
{
	SetProperty(0x14, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CCWTicks operations
