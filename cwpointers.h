// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CCWPointer;

/////////////////////////////////////////////////////////////////////////////
// CCWPointers wrapper class

class CCWPointers : public COleDispatchDriver
{
public:
	CCWPointers() {}		// Calls COleDispatchDriver default constructor
	CCWPointers(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CCWPointers(const CCWPointers& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetCount();
	void SetCount(short);

// Operations
public:
	CCWPointer Item(const VARIANT& Item);
	LPUNKNOWN _NewEnum();
	void Remove(const VARIANT& Element);
	void RemoveAll();
	CCWPointer Add();
};
