#include "class1.h"
int main()
{
	cout << "�й�: 22124662, �̸�: �Ѵ���\n";
	cout << "�ǽ� 3-1 \n\n";
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