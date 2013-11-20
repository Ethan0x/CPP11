#include <iostream>

class PI
{
public:
	double operator*(float v)
	{
		return (double)pi *v;	//这里精度被扩展
	}
	const float pi = 3.1415927f;
};

int main(int argc, const char *argv[])
{
	float radius = 1.7e10;
	PI p;
	float circumference = 2 * (p * radius);
	std::cout << circumference << std::endl;
	return 0;
}