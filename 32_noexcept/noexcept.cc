//void except_func() throw(int, double) { }	//C++11标准废除throw
//void except_func() noexcept;				//新标准加入noexcept描述符
//Bug分析:异常引发的异常（嵌套异常）
//由于主函数出现异常，这时程序将由异常代码控制，它负责销毁所有局部变量，包括a，
//a被销毁时，又会调用析构函数，又将抛出一个异常，程序就会调用terminate()函数收拾残局！
//这种情况下C++语言担保，处于嵌套异常时，会调用terminate()来杀死进程
//Bug的解决方案：
//在析构函数中使用try-catch自己处理异常


#include <iostream>
using namespace std;

class A{
private:
	int _count;
public:
	A(void) :_count(0){}
	~A(void){
		if (_count != 0)
			throw("error");
	}
	void Set_count(int val){ _count = val; }
};

int main(int argc, const char **argv)
{
	A a;
	a.Set_count(1);

	bool staus = true;
	if (staus)
	{
		throw("error");
	}
	return 0;
}
