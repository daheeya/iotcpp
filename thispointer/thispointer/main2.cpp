#include "class2.h"
int main()
{
	cout << "�й�: 22124662, �̸�: �Ѵ���\n";
	cout << "�ǽ� 3-2 \n\n";
	WhoAmI obj1(1);
	WhoAmI obj2(2);
	WhoAmI obj3(3);
	obj1.showYourself();
	obj2.showYourself();
	obj3.showYourself();
	cout << " & obj1 = " << &obj1 << "\n";
	cout << " & obj2 = " << &obj2 << "\n";
	cout << " & obj3 = " << &obj3 << "\n";
	return 0;
}