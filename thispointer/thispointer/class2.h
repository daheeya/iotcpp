#include <iostream>
using namespace std;
#ifndef _CLASS_H2_
#define _CLASS_H2_
class WhoAmI //class 정의
{
private: int id;
public: void showYourself();
	  WhoAmI(const WhoAmI& temp);
	  WhoAmI(int id_arg);
	  WhoAmI();
	  ~WhoAmI(); //소멸자
};
#endif