#include "StdAfx.h"
#include "sao.h"


sao::sao(void)
{
}

void sao::thietlapsao(int mx1,int my1,int mx3, int my3)
{
	x1=mx1;y1=my1;
	x3=mx3;y3=my3;
	x2=x3;
	y2=y1;
	x4=x1;
	y4=y3;
	s1=(x1+x2)/2;
	t1=y1;
	s2=x3;
	t2=(y1+y3)/2;
	s3=(x1+x2)/2;
	t3=y3;
	s4=x1;
	t4=(y1+y3)/2;
}
void sao::vesao(CClientDC *pDC)

{
	pDC->MoveTo(x1,y1);pDC->LineTo(s2,t2);
	pDC->MoveTo(x1,y1);pDC->LineTo(s3,t3);
	pDC->MoveTo(x2,y2);pDC->LineTo(s3,t3);
	pDC->MoveTo(x2,y2);pDC->LineTo(s4,t4);
	pDC->MoveTo(x3,y3);pDC->LineTo(s1,t1);
	pDC->MoveTo(x3,y3);pDC->LineTo(s4,t4);
	pDC->MoveTo(x4,y4);pDC->LineTo(s2,t2);
	pDC->MoveTo(x4,y4);pDC->LineTo(s1,t1);
	}
sao::~sao(void)
{
}
