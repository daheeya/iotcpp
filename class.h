#pragma once
# include <iostream>
using namespace std;

#ifndef _CLASS_H_
#define _CLASS_H_

class Complex
{
private: int real;
	   int image;
public:	void init();
	  void show();
	  Complex(int rr, int ii);
	  Complex();
	  ~Complex();
};
#endif