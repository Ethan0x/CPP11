//1.auto
template <typename T1, typename T2>
double Sum(T1 & t1, T2 & t2)
{
	auto s = t1 + t2;
	return s;
}

//2.decltype
template<typename T1, typename T2>
decltype (t1 + t2) Sum(T1 & t1, T2 & t2)
{
	return t1 + t2;
}

//3.auto + decltype
template <typename T1, typename T2>
auto Sum(T1 & t1, T2 & t2) -> decltype(t1 + t2)
{
	return t1 + t2;
}