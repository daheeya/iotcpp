#include "class.h"

void Complex::init()
{
	real = 2;
	image = 5;
}
void Complex::show()
{
	cout << "(" << real << "+" << image << "i )" << endl;
}
Complex::Complex(int rr, int ii)
{
	real = rr;
	image = ii;
}
Complex::Complex()
{
	real = 0;
	image = 0;
}
Complex :: ~Complex()
{ }