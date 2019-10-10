
// bai19View.cpp : implementation of the Cbai19View class
//

#include "stdafx.h"

// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "bai19.h"
#endif

#include "bai19Doc.h"
#include "bai19View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cbai19View

IMPLEMENT_DYNCREATE(Cbai19View, CView)

BEGIN_MESSAGE_MAP(Cbai19View, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &Cbai19View::OnFilePrintPreview)
//	ON_WM_CONTEXTMENU()
//	ON_WM_RBUTTONUP()
ON_WM_LBUTTONDOWN()
ON_WM_LBUTTONUP()
ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// Cbai19View construction/destruction

Cbai19View::Cbai19View()
{
	// TODO: add construction code here
	tg.thietlap(400,100,600,300);

}

Cbai19View::~Cbai19View()
{
}

BOOL Cbai19View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// Cbai19View drawing

void Cbai19View::OnDraw(CDC* /*pDC*/)
{
	Cbai19Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	


	// TODO: add draw code for native data here
}


// Cbai19View printing


void Cbai19View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL Cbai19View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void Cbai19View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void Cbai19View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

//void Cbai19View::OnRButtonUp(UINT /* nFlags */, CPoint point)
//{
//	ClientToScreen(&point);
//	OnContextMenu(this, point);
//}

//void Cbai19View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
//{
//#ifndef SHARED_HANDLERS
//	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
//#endif
//}


// Cbai19View diagnostics

#ifdef _DEBUG
void Cbai19View::AssertValid() const
{
	CView::AssertValid();
}

void Cbai19View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cbai19Doc* Cbai19View::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cbai19Doc)));
	return (Cbai19Doc*)m_pDocument;
}
#endif //_DEBUG


// Cbai19View message handlers


void Cbai19View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	p1.x=point.x;
	p1.y=point.y;
	CView::OnLButtonDown(nFlags, point);
}


void Cbai19View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	p2.x=point.x;
	p2.y=point.y;
	CClientDC pDC(this);
	tg.thietlap(p1.x,p1.y,p2.x,p2.y);
	tg.ve(&pDC);
	CView::OnLButtonUp(nFlags, point);
}


void Cbai19View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: Add your message handler code here and/or call default
	int key;
	key=nChar;
	CClientDC pDC(this);
	tg.xoahinh(&pDC,key);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
