#include "StdAfx.h"
#include "tamgiac.h"


tamgiac::tamgiac(void)
{ 
}
void tamgiac::thietlap(int mx1,int my1,int mx3, int my3)
{
	x1=mx1;y1=my1;
	x3=mx3;y3=my3;
	x2=x3;
	y2=y1;
	x4=x1;
	y4=y3;
	x5=(x3+x1)/2;
	y5=y1;
}
void tamgiac::ve(CClientDC *pDC)

{
	pDC->MoveTo(x5,y5);pDC->LineTo(x3,y3);
	pDC->MoveTo(x5,y5);pDC->LineTo(x4,y4);
	pDC->MoveTo(x4,y4);pDC->LineTo(x3,y3);
	}

void tamgiac::dichuyentrai()
{
    x3+=10;
	x4+=10;
    x5+=10;
		
}
void tamgiac::dichuyenphai()
{
    x3-=10;
	x4-=10;
    x5-=10;
		
}
void tamgiac::dichuyenlen()
{
    y3-=10;
	y4-=10;
    y5-=10;
		
}
void tamgiac::dichuyenxuong()
{
    y3+=10;
	y4+=10;
    y5+=10;
		
}
void tamgiac::vehinhdichuyentrai(CClientDC *pDC)
{
	dichuyentrai();
	ve(pDC);
}
void tamgiac::vehinhdichuyenphai(CClientDC *pDC)
{
	dichuyenphai();
	ve(pDC);
}
void tamgiac::vehinhdichuyenlen(CClientDC *pDC)
{
	dichuyenlen();
	ve(pDC);
}
void tamgiac::vehinhdichuyenxuong(CClientDC *pDC)
{
	dichuyenxuong();
	ve(pDC);
}
void tamgiac::xoahinh(CClientDC *pDC,int k)
{
	CPen *oldpen1=new CPen(PS_SOLID,1,RGB(255,255,255));
	pDC->SelectObject(oldpen1);
	ve(pDC);
	if(k==39)
		vehinhdichuyentrai(pDC);
	if(k==37) 
		vehinhdichuyenphai(pDC);
	if(k==38) 
		vehinhdichuyenlen(pDC);
	if(k==40) 
		vehinhdichuyenxuong(pDC);

	CPen *pen1=new CPen(PS_SOLID,1,RGB(255,20,60));
	pDC->SelectObject(pen1);
	ve(pDC);
}
tamgiac::~tamgiac(void)
{
}
