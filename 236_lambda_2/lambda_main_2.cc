#include <iostream>

int main(int argc, const char *argv[])
{
	int a(1), b(2);
	std::cout << "At the first the a && b are : " << a << "\t" << b << std::endl;

	//1.最简lambda函数
	[]{};		
	//2.省略了参数列表与返回值类型，返回值类型由编译器推断为int
	[=]{ return a + b; };	
	//3.省略返回值类型，无返回值
	auto fun1 = [&](int c) { b = a + c; };
	//4.各部分很完整的lambda函数
	auto fun2 = [=, &b](int c) ->decltype(a + c){ return b = a + c; };

	fun1(3);
	std::cout << "After fun1 " << "b is : " << b << std::endl;
	fun2(4);
	std::cout << "After fun2 " << "b is : " << b << std::endl;

	return 0;
}