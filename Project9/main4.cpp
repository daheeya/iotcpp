#include "class4.h"
void prn(Complex* pCom);
int main() {
	cout << "�й�: 22124662, �̸�: �Ѵ���\n";
	cout << "�ǽ� 4-1 <��ü �迭>  \n\n";
	Complex arr[4] = { Complex(2,4), Complex(4,5),Complex(8,16),Complex(16,32) };
	for (int i = 0; i < 4;i++) arr[i].show();
}
void prn(Complex* pCom) // ��ü ������ ������ ���� �μ��� ����
{
	for (int i = 0; i < 4; i++) (pCom + i)->show();
}