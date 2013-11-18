#include <iostream>

class Base
{
	virtual void Turing() = 0;
	virtual void Dijkstra() = 0;
	virtual void VNeumann(int g) = 0;
	virtual void DKnuth()const;
	void Print();
};

class DerivedMid:public Base
{
	void VNeumann(double g);	
	//接口被隔离，不知道诺依曼是不是虚函数
};

class DervidTop :public DerivedMid
{
	void Turing()override;		//Ok
	//void Dijsktra()override;	//No! 拼写错误
	//void VNeumann(double g)override;	//No! 参数不匹配
	//void DKnuth()override;		//No! 常亮性不一致
	//void Print()override;		//No！非虚函数
};
