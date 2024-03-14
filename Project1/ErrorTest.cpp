# include <iostream>

using namespace std;
struct Complex {
	int real;
	int image;
};

void init(Complex *p1) {};
void init(int rr, int ii, Complex *p2);
void show(Complex *p3);

void main()
{
	cout << "학번: 22124662" << "이름: 한다희";
	Complex *x = nullptr, *y = nullptr;
	init(x);
	init(40, 50, x);
	show(x);
	show(y);
}

void init(int rr, int ii, Complex* p2)
{
	{
		p2->real = rr;
		p2->image = ii;
	}

}

void show(Complex *p3)
{
	cout << "(" << p3-> real << "+" << p3-> image << "i)" >> endl;
}
