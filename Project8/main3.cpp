#include "class3.h"
void prn(Complex* pCom);
int main() {
	cout << "�й�: 22124662, �̸�: �Ѵ���\n";
	cout << "�ǽ� 4-2 <������ �Լ�>  \n\n";
	Complex arr[4] = { Complex(2,4), Complex(4,5),Complex(8,16),Complex(16,32) };
	prn(arr);
}
void prn(Complex* pCom) // ��ü ������ ������ ���� �μ��� ����
{
	for (int i = 0; i < 4; i++) {
		cout << "( " << (pCom + i)->real << " + " << (pCom + i)->image << "i )" << endl;
	}
}