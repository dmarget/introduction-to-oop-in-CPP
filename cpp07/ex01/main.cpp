#include <iostream>
#include "Iter.hpp"

//class A
//{
//public:
//	A():_n(42) {return;};
//	int get() const {return _n;}
//private:
//	int _n;
//};
//
//std::ostream & operator << (std::ostream &o, A const &rhs) {o << rhs.get();return o;}
//
//template <typename T>
//void print(T const &x) {std::cout << x << std::endl; return;}

int main()
{
	int arr[] = {1,2,3,4,5};
	iter(arr, 5, print);

	std::string arr2[] = {"cheburashka", "cheburak", "cheburek"};
	iter(arr2, 3, print);
//	int tab[] = {0,1,2,3,4};
//	A tab2[5];
//
//	iter(tab, 5, print);
//	iter(tab2, 5, print);
//	return 0;
}
