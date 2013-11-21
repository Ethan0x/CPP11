#include <atomic>
#include <thread>
#include <iostream>

std::atomic_llong total{ 0 };		//原子数据类型

void func(int)
{
	for (long long i = 0; i < 100000000LL; ++i)
	{
		total += i;
	}
}

int main(int argc, const char *argv[])
{
	std::thread t1(func, 0);
	std::thread t2(func, 0);

	t1.join();
	t2.join();

	std::cout << "The total is : " << total << std::endl;
	return 0;
}