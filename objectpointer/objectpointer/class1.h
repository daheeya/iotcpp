#pragma once
#include <iostream>
using namespace std;
#ifndef _CLASS_H1_
#define _CLASS_H1_
class Complex //class ����
{
private: int real;
	   int image;
public: void init();
	  void show();
	  Complex(const Complex& temp);
	  Complex(int rr, int ii); //������
	  Complex(); //������
	  ~Complex(); //�Ҹ���
};
#endif