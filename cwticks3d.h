#if !defined(AFX_CWTICKS3D_H__DAA6058B_66D1_4398_AF01_646002540F0A__INCLUDED_)
#define AFX_CWTICKS3D_H__DAA6058B_66D1_4398_AF01_646002540F0A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CCWTicks3D wrapper class

class CCWTicks3D : public COleDispatchDriver
{
public:
	CCWTicks3D() {}		// Calls COleDispatchDriver default constructor
	CCWTicks3D(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CCWTicks3D(const CCWTicks3D& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	BOOL GetInside();
	void SetInside(BOOL);
	BOOL GetOutside();
	void SetOutside(BOOL);
	BOOL GetNormal();
	void SetNormal(BOOL);
	BOOL GetOpposite();
	void SetOpposite(BOOL);
	VARIANT GetMajorDivisions();
	void SetMajorDivisions(const VARIANT&);
	VARIANT GetMinorDivisions();
	void SetMinorDivisions(const VARIANT&);
	BOOL GetAutoDivisions();
	void SetAutoDivisions(BOOL);
	VARIANT GetMajorUnitsInterval();
	void SetMajorUnitsInterval(const VARIANT&);
	VARIANT GetMajorUnitsBase();
	void SetMajorUnitsBase(const VARIANT&);
	VARIANT GetMinorUnitsInterval();
	void SetMinorUnitsInterval(const VARIANT&);
	BOOL GetMajorGrid();
	void SetMajorGrid(BOOL);
	BOOL GetMinorGrid();
	void SetMinorGrid(BOOL);
	unsigned long GetMajorGridColor();
	void SetMajorGridColor(unsigned long);
	unsigned long GetMinorGridColor();
	void SetMinorGridColor(unsigned long);
	BOOL GetMajorTicks();
	void SetMajorTicks(BOOL);
	BOOL GetMinorTicks();
	void SetMinorTicks(BOOL);
	unsigned long GetMajorTickColor();
	void SetMajorTickColor(unsigned long);
	unsigned long GetMinorTickColor();
	void SetMinorTickColor(unsigned long);

// Operations
public:
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CWTICKS3D_H__DAA6058B_66D1_4398_AF01_646002540F0A__INCLUDED_)
