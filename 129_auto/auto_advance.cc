#include <iostream>

template <typename T1, typename T2>
double Sum(T1 & t1, T2 & t2)
{
	auto s = t1 + t2;
	return s;
}

int main(int argc, const char *argv[])
{
	int a(3);
	long b(5);
	float c(1.0e10f), d(2.0e10f);

	auto e = Sum<int, long>(a, b);		//s的类型被推导为long
	auto f = Sum<float, float>(c, d);	//s的类型被推导为float

	std::cout << e << std::endl;
	std::cout << f << std::endl;

	size_t s1 = std::strlen("hello world!");
	auto s2 = std::strlen("hello world!");
	
	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
	return 0;
}