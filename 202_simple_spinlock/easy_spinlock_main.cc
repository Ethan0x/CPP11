#include <thread>
#include <atomic>
#include <iostream>
#include <windows.h>

std::atomic_flag lock = ATOMIC_FLAG_INIT;

//封装读写操作，实现无锁编程
void Lock(std::atomic_flag *lock) { while (lock->test_and_set()); }
void Unlock(std::atomic_flag *lock) { lock->clear(); }

void func(int n)
{
	while (lock.test_and_set(std::memory_order_acquire))	//尝试获得锁
		std::cout << "Waiting for the thread " << n << std::endl;	//spin
	std::cout << "Thread " << n << " starts working!" << std::endl;
}

void foo(int n)
{
	std::cout << "Thread " << n << " is going to start." << std::endl;
	lock.clear();
	std::cout << "Thread " << n << " starts working." << std::endl;
}

int main(int argc, const char *argv[])
{
	lock.test_and_set();
	std::thread t1(func, 1);
	std::thread t2(foo, 2);

	t1.join();
	Sleep(10000);
	t2.join();

	return 0;
}