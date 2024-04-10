#include "class1.h"
int main()
{
	cout << "학번: 22124662, 이름: 한다희\n";
	cout << "실습 3-1 \n\n";
	Complex x;
	Complex y(40, 50);
	Complex z(y);
	Complex* pCom;
	x.init();
	y.show();
	z.show();
	pCom = &y;
	pCom->show();
	return 0;
}