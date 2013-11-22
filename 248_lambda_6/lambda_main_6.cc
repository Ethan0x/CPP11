#include <vector>
#include <algorithm>
#include <iostream>

std::vector<int> nums;
std::vector<int> largeNums;

const int ubound = 10;

inline void LargeNumsFunc(int i)
{
	if (i > ubound)
		largeNums.push_back(i);
}

int main(int argc, const char *argv[])
{
	//传统for函数
	for (auto iter = nums.begin(); iter != nums.end(); ++iter)
	{
		if (*iter > ubound)
			largeNums.push_back(*iter);
	}

	//使用函数指针
	std::for_each(nums.begin(), nums.end(), LargeNumsFunc);

	//使用lambda函数和函数指针
	std::for_each(nums.begin(), nums.end(), [=](int i){
		if (i > ubound)
			largeNums.push_back(i);
	});

	return 0;
}