#include <iostream>
#include <map>
#include <vector>

int a[] = { 1, 2, 3 };			//C++98通过，C++11通过
int b[] { 1, 2, 3 };			//C++98失败，C++11通过
std::vector<int> c { 1, 2, 3 };	//C++98失败，C++11通过
std::map <int, float> d = 
{ { 1, 0.1 }, { 2, 0.2 }, { 3, 0.3 } };//C++98失败，C++11通过