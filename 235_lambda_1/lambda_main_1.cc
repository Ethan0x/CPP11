#include <iostream>

int main(int argc, const char* argv[])
{
	int girls(3), boys(4);
	
	auto totalchild = [](int x, int y)->int {return x + y; };

	std::cout << "totalchild: " << totalchild(girls, boys) << std::endl;

	return 0;
}