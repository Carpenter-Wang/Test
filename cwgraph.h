#if !defined(AFX_CWGRAPH_H__475857A2_6662_4E38_9C2E_78018EE417C3__INCLUDED_)
#define AFX_CWGRAPH_H__475857A2_6662_4E38_9C2E_78018EE417C3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CFontDisp;
class CCWPlot;
class CCWAnnotation;
class CCWPlots;
class CCWAxes;
class CPictureDisp;
class CCWBindings;
class CCWAnnotations;

/////////////////////////////////////////////////////////////////////////////
// CCWGraph wrapper class

class CCWGraph : public CWnd
{
protected:
	DECLARE_DYNCREATE(CCWGraph)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0xb68dbfab, 0x16a0, 0x11ce, { 0x80, 0xbf, 0x0, 0x20, 0xaf, 0x31, 0xce, 0xf9 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:
	BOOL GetEnabled();
	void SetEnabled(BOOL);
	unsigned long GetPlotAreaColor();
	void SetPlotAreaColor(unsigned long);
	LPDISPATCH GetPlotAreaImage();
	void SetPlotAreaImage(LPDISPATCH);
	long GetTrackMode();
	void SetTrackMode(long);
	CFontDisp GetFont();
	void SetFont(LPDISPATCH);
	CCWPlot GetPlotTemplate();
	void SetPlotTemplate(LPDISPATCH);
	long GetChartStyle();
	void SetChartStyle(long);
	long GetChartLength();
	void SetChartLength(long);
	LPDISPATCH GetGraphFrameImage();
	void SetGraphFrameImage(LPDISPATCH);
	unsigned long GetGraphFrameColor();
	void SetGraphFrameColor(unsigned long);
	BOOL GetImmediateUpdates();
	void SetImmediateUpdates(BOOL);
	CString GetCaption();
	void SetCaption(LPCTSTR);
	OLE_COLOR GetBackColor();
	void SetBackColor(OLE_COLOR);
	long GetReadyState();
	void SetReadyState(long);
	BOOL GetWindowless();
	void SetWindowless(BOOL);
	unsigned long GetCaptionColor();
	void SetCaptionColor(unsigned long);
	long GetKeyboardMode();
	void SetKeyboardMode(long);
	double GetDefaultxInc();
	void SetDefaultxInc(double);
	double GetDefaultxFirst();
	void SetDefaultxFirst(double);
	BOOL GetDefaultPlotPerRow();
	void SetDefaultPlotPerRow(BOOL);
	VARIANT GetYDataAppend();
	void SetYDataAppend(const VARIANT&);
	VARIANT GetXYDataAppend();
	void SetXYDataAppend(const VARIANT&);
	VARIANT GetYData();
	void SetYData(const VARIANT&);
	VARIANT GetXYData();
	void SetXYData(const VARIANT&);
	long GetGraphFrameStyle();
	void SetGraphFrameStyle(long);
	CCWAnnotation GetAnnotationTemplate();
	void SetAnnotationTemplate(LPDISPATCH);

// Operations
public:
	CCWPlots GetPlots();
	CCWAxes GetAxes();
	void PlotXvsY(const VARIANT& xData, const VARIANT& YData, const VARIANT& bPlotPerRow);
	void PlotY(const VARIANT& YData, const VARIANT& xFirst, const VARIANT& xInc, const VARIANT& bPlotPerRow);
	void PlotXY(const VARIANT& XYData, const VARIANT& bPlotPerRow);
	LPDISPATCH GetCursors();
	void ChartY(const VARIANT& YData, const VARIANT& xInc, const VARIANT& bChartPerRow);
	void ChartXY(const VARIANT& XYData, const VARIANT& bChartPerRow);
	void ChartXvsY(const VARIANT& xData, const VARIANT& YData, const VARIANT& bChartPerRow);
	void ClearData();
	void ImportStyle(LPCTSTR FileName);
	void ExportStyle(LPCTSTR FileName);
	LPDISPATCH Images(const VARIANT& Item);
	CPictureDisp ControlImage();
	CCWBindings GetCWBindings();
	CCWAnnotations GetAnnotations();
	void AboutBox();
	void Refresh();
	CPictureDisp ControlImageEx(long dpiX, long dpiY);
	void GetPlotAreaBounds(long* Left, long* top, long* Width, long* Height);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CWGRAPH_H__475857A2_6662_4E38_9C2E_78018EE417C3__INCLUDED_)
