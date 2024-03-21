
#include <iostream>
using namespace std;

class Point
{
public:
	int x, y;
	void Print();
};
void Point::Print()
{
	cout << "(" << x << ", " << y << ")\n";
}

int main()
{
	cout << "학번: 22124662, 이름 : 한다희\n";
	cout << "실습 1-3 \n\n";

	Point pt1, pt2;

	pt1.x = 100; pt1.y = 100;
	pt2.x = 200; pt2.y = 200;

	Point pt3 = pt1;
	pt3.Print();

	pt3 = pt2;
	pt3.Print();
	return 0;
}