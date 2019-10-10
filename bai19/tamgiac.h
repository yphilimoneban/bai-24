#pragma once
class tamgiac
{
public:
	int x1,y1,x3,y3,x2,y2,x4,y4,x5,y5;
	tamgiac(void);
	void thietlap(int mx1,int my1,int mx3, int my3);
	void ve(CClientDC*pDC);
	void dichuyenphai();
	void dichuyenlen();
	void dichuyenxuong();
	void dichuyentrai();
	void vehinhdichuyentrai(CClientDC *pDC);
	void vehinhdichuyenphai(CClientDC *pDC);
	void vehinhdichuyenlen(CClientDC *pDC);
	void vehinhdichuyenxuong(CClientDC *pDC);
	void xoahinh(CClientDC *pDC,int k   );
	~tamgiac(void);
};

