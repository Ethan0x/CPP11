#include <iostream>
#include <vector>

int main(int argc, const char *argv[])
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	
	for (auto i = v.begin(); i != v.end(); ++i)
		std::cout << *i << "\t";	//i是迭代器对象

	std::cout << "\n" << "From here is range for :" << "\n";

	for (auto e : v)
		std::cout << e << "\t";		//e是解引用后的对象

	return 0;
}