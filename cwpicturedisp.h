// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CCWImage;

/////////////////////////////////////////////////////////////////////////////
// CCWPictureDisp wrapper class

class CCWPictureDisp : public COleDispatchDriver
{
public:
	CCWPictureDisp() {}		// Calls COleDispatchDriver default constructor
	CCWPictureDisp(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CCWPictureDisp(const CCWPictureDisp& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CCWImage GetCWImage();
	void SetCWImage(LPDISPATCH);
	long GetHandle();
	void SetHandle(long);
	long GetHPal();
	void SetHPal(long);
	short GetType();
	void SetType(short);
	long GetWidth();
	void SetWidth(long);
	long GetHeight();
	void SetHeight(long);

// Operations
public:
};