#include <iostream>
class People
{
public:
	int hand{ 0 };
	People *p{ nullptr };
	
	class Child
	{
		int childhand{ 100 };
		Child *child{ nullptr };
	};
};

int main(int argc, const char *argv[])
{
	People p;
	std::cout << p.hand << " " << p.p << std::endl;
	std::cout << People::Child.childhand << " " << People::Child.child << std::endl;
	return 0;
}
