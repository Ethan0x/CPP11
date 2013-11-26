#include <iostream>

class HasPtrMem
{
public:
	HasPtrMem() :d_(new int(100)) { }
	~HasPtrMem(){ delete d_; }
	int *d_;
};
int main(int argc, const char *argv[])
{
	HasPtrMem a;
	HasPtrMem b = a;

	std::cout << *a.d_ << std::endl;
	std::cout << *b.d_ << std::endl;

	return 0;
}