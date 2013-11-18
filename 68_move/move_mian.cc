#include <iostream>

class HasPtrMem
{
public:
	HasPtrMem():d_(new int(100))
	{
		std::cout << "Construct: " << ++n_cstr << std::endl;
	}

	HasPtrMem(const HasPtrMem &h) :d_(new int(*h.d_))
	{
		std::cout << "Copy Construct: " << ++n_cptr << std::endl;
	}

	~HasPtrMem()
	{
		std::cout << "Destruct: " << ++n_dstr << std::endl;
	}
	int *d_;
	static int n_cstr;	//记录构造函数执行的次数
	static int n_dstr;	//记录析构函数执行的次数
	static int n_cptr;	//记录拷贝构造函数执行的次数
};

int HasPtrMem::n_cptr = 0;
int HasPtrMem::n_cstr = 0;
int HasPtrMem::n_dstr = 0;

HasPtrMem GetTemp() { return HasPtrMem(); }

int main(int argc, const char *argv[])
{
	HasPtrMem a = GetTemp();
	return 0;
}

