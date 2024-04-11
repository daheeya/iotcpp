#include "class4.h"
void prn(Complex* pCom);
int main() {
	cout << "학번: 22124662, 이름: 한다희\n";
	cout << "실습 4-1 <객체 배열>  \n\n";
	Complex arr[4] = { Complex(2,4), Complex(4,5),Complex(8,16),Complex(16,32) };
	for (int i = 0; i < 4;i++) arr[i].show();
}
void prn(Complex* pCom) // 객체 포인터 변수를 형식 인수로 선언
{
	for (int i = 0; i < 4; i++) (pCom + i)->show();
}