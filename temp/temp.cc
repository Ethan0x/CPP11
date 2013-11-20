#include <iostream>
#include <vector>

void fun(auto x = 1) {};			//1.auto函数参数无法通过编译

struct str{
	auto var = 10;					//2.auto非静态成员变量，无法通过编译
};

int main(int argc, const char *argv[])
{
	auto int i = 1;
	return 0;
}