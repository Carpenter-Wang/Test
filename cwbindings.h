// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CCWBinding;

/////////////////////////////////////////////////////////////////////////////
// CCWBindings wrapper class

class CCWBindings : public COleDispatchDriver
{
public:
	CCWBindings() {}		// Calls COleDispatchDriver default constructor
	CCWBindings(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CCWBindings(const CCWBindings& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	short GetCount();
	void SetCount(short);

// Operations
public:
	CCWBinding Item(const VARIANT& Item);
	LPUNKNOWN _NewEnum();
	void Remove(const VARIANT& Element);
	void RemoveAll();
	CCWBinding Add();
};
