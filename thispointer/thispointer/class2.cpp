#include "class2.h"
void WhoAmI::showYourself()
{
	cout << "{ID= " << id << ", this = " << this << " }\n";
}
WhoAmI::WhoAmI(const WhoAmI& temp)
{
	id = temp.id;
}
WhoAmI::WhoAmI(int id_arg)
{
	id = id_arg;
}
WhoAmI::WhoAmI()
{
	id = 0;
}
WhoAmI::~WhoAmI()
{ }