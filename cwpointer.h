// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CCWPointer wrapper class

class CCWPointer : public COleDispatchDriver
{
public:
	CCWPointer() {}		// Calls COleDispatchDriver default constructor
	CCWPointer(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CCWPointer(const CCWPointer& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	VARIANT GetValue();
	void SetValue(const VARIANT&);
	long GetFillStyle();
	void SetFillStyle(long);
	CString GetName();
	void SetName(LPCTSTR);
	unsigned long GetFillColor();
	void SetFillColor(unsigned long);
	long GetIndex();
	void SetIndex(long);
	long GetStyle();
	void SetStyle(long);
	BOOL GetVisible();
	void SetVisible(BOOL);
	long GetMode();
	void SetMode(long);
	unsigned long GetColor();
	void SetColor(unsigned long);
	long GetValuePairIndex();
	void SetValuePairIndex(long);

// Operations
public:
};
