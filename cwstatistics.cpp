// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "cwstatistics.h"


/////////////////////////////////////////////////////////////////////////////
// CCWStatistics properties

VARIANT CCWStatistics::GetMean()
{
	VARIANT result;
	GetProperty(0x1, VT_VARIANT, (void*)&result);
	return result;
}

void CCWStatistics::SetMean(const VARIANT& propVal)
{
	SetProperty(0x1, VT_VARIANT, &propVal);
}

VARIANT CCWStatistics::GetMaximum()
{
	VARIANT result;
	GetProperty(0x2, VT_VARIANT, (void*)&result);
	return result;
}

void CCWStatistics::SetMaximum(const VARIANT& propVal)
{
	SetProperty(0x2, VT_VARIANT, &propVal);
}

VARIANT CCWStatistics::GetMinimum()
{
	VARIANT result;
	GetProperty(0x3, VT_VARIANT, (void*)&result);
	return result;
}

void CCWStatistics::SetMinimum(const VARIANT& propVal)
{
	SetProperty(0x3, VT_VARIANT, &propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CCWStatistics operations

void CCWStatistics::Reset()
{
	InvokeHelper(0x4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}
