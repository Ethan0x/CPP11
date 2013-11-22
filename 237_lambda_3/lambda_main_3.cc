#include <iostream>

int main(int argc, const char *argv[])
{
	int boys(3), girls(4);
	decltype(boys + girls) totalchild = boys + girls;

	auto fun1 = [=]()->int{ return boys + girls; };
	auto fun2 = [&]()->int{ return boys + girls; };

	std::cout << "Totalchild on fun1 first is: " << fun1() << std::endl;
	std::cout << "Totalchild on fun2 first is: " << fun2() << std::endl;

	if ( totalchild > 5 ) { boys++; }
	
	std::cout << "Totalchild on fun1 second is: " << fun1() << std::endl;
	std::cout << "Totalchild on fun2 second is: " << fun2() << std::endl;

	return 0;
}