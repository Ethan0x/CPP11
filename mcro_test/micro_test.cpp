#include <iostream>
#include <atomic>
#include <thread>

using namespace std;

atomic_llong total { 0 };

void func(int)
{
	for (auto i = 0; i < 1000000000LL; ++i)
		total += i;
}

int main(int argc, const char *argv[])
{
	thread t1(func, 0);
	thread t2(func, 0);
	thread t3(func, 0);
	thread t4(func, 0);

	t1.join();
	t2.join();
	t3.join();
	t4.join();
	cout << total << endl;
	return 0;
}