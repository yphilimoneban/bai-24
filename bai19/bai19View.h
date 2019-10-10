
// bai19View.h : interface of the Cbai19View class
//

#pragma once

#include "tamgiac.h"


class Cbai19View : public CView
{
protected: // create from serialization only
	Cbai19View();
	DECLARE_DYNCREATE(Cbai19View)

// Attributes
public:
	Cbai19Doc* GetDocument() const;

// Operations
public:
	tamgiac tg ;
	CPoint p1,p2;

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~Cbai19View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
//	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
//	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // debug version in bai19View.cpp
inline Cbai19Doc* Cbai19View::GetDocument() const
   { return reinterpret_cast<Cbai19Doc*>(m_pDocument); }
#endif

