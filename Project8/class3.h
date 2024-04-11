#pragma once
#include <iostream>
using namespace std;
#ifndef _CLASS_H3_
#define	_CLASS_H3_
class Complex //class 정의
{
private: int real;
	   int image;
public: void init();
	  void show();
	  Complex(const Complex& temp);
	  Complex(int rr, int ii); // 생성자
	  Complex();
	  ~Complex();
	  friend void prn(Complex* pCom);
};

#endif
