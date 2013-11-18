#include <iostream>

class MatchObject
{
public:
	virtual double Arith() = 0;
	virtual void Print() = 0;

};

class Printable :public MatchObject
{
public:
	double Arith() = 0;
	void Print() //在C++98中无法阻止该接口被重写
	{
		std::cout << "Output is :" << Arith() << std::endl;
	}
};

class Add :public Printable
{
public:
	Add(double a, double b) :x_(a), y_(b){}
	double Arith(){ return x_ + y_; }
private:
	double x_, y_;
};

class Add2 :public Printable
{
public:
	Add2(double a, double b, double c) :x_(a), y_(b), z_(c){}
	double Arith(){ return x_ * y_ * z_; }
private:
	double x_, y_, z_;
};