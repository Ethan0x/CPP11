#include <iostream>

class _functor
{
public:
	int operator () (int x, int y){ return x + y; };
};

int main(int argc, const char *argv[])
{
	int boys(3), girls(4);

	_functor totalchild;
	std::cout << "Total from functor are : " << totalchild(boys, girls) << std::endl;

	auto lambda_total = [ ](int x, int y)->int{ return x + y; };
	std::cout << "Total from Lambda  are : " << lambda_total(boys, girls) << std::endl;

	return 0;
}