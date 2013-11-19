#include <iostream>

class People
{
public:
	int hand;
	People *p;
};
int main(int argc, const char *argv[])
{
	std::cout << sizeof(((People*)0)->p) << std::endl;
	std::cout << sizeof(((People*)0)->hand) << std::endl;
	std::cout << sizeof(People::p) << std::endl;
	std::cout << sizeof(People::hand) << std::endl;
	return 0;
}