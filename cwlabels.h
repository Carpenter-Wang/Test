// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CCWLabels wrapper class

class CCWLabels : public COleDispatchDriver
{
public:
	CCWLabels() {}		// Calls COleDispatchDriver default constructor
	CCWLabels(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CCWLabels(const CCWLabels& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	BOOL GetAbove();
	void SetAbove(BOOL);
	BOOL GetBelow();
	void SetBelow(BOOL);
	BOOL GetLeft();
	void SetLeft(BOOL);
	BOOL GetRight();
	void SetRight(BOOL);
	unsigned long GetColor();
	void SetColor(unsigned long);
	BOOL GetRadial();
	void SetRadial(BOOL);
	long GetWidth();
	void SetWidth(long);

// Operations
public:
};
