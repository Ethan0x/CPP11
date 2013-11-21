#include <memory>
#include <iostream>

void Check(std::weak_ptr<int> &wp)
{
	std::shared_ptr<int> sp = wp.lock();	//试探性提升
	if (sp != nullptr)
	{
		std::cout << "still: " << *sp << std::endl;
	}
	else
	{
		std::cout << "pointer is invalid." << std::endl;
	}
}
int main(int argc, const char *argv[])
{
	std::shared_ptr<int> sp1(new int(22));
	std::shared_ptr<int> sp2 = sp1;
	std::weak_ptr<int> wp = sp1;	//指向shared_ptr<int>所指向的对象

	std::cout << *sp1 << std::endl;	//22
	std::cout << *sp2 << std::endl;	//22	
	Check(wp);		//检查该对象是否还有效

	sp1.reset();	//显式释放sp1
	std::cout << *sp2 << std::endl;	//22
	Check(wp);		//检查该对象是否还有效

	sp2.reset();	//显式释放sp2
	Check(wp);		//检查该对象是否还有效
	
	return 0;
}