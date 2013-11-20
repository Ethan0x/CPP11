#include <iostream>
#include <algorithm>

void action1(int &e){ e *= 2; }
void action2(int &e){ std::cout << e << "\n"; }

int main(int argc, const char *argv[])
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	
	std::for_each(arr, arr + sizeof(arr) / sizeof(arr[0]), action1);
	std::for_each(arr, arr + sizeof(arr) / sizeof(arr[0]), action2);

	return 0;
}