#include <iostream>
#include "whatever.hpp"

//int main()
//{
//	int a = 2;
//	int b = 4;
//
//	std::cout << "number one :"<< a << std::endl;
//	std::cout << "number two :"<< b << std::endl;
//	::swap(a,b);
//	std::cout << "----------------------" << std::endl;
//	std::cout << "number one :"<< a << std::endl;
//	std::cout << "number two :"<< b << std::endl;
//	std::cout << "----------------------" << std::endl;
//	std::cout << "min :" << ::min(a,b) << std::endl;
//	std::cout << "max :" << ::max(a,b) << std::endl;
//	std::cout << "----------------------" << std::endl;
//
//
//	std::string c = "abc";
//	std::string d = "123";
//	std::cout << "string one :"<< c << std::endl;
//	std::cout << "string two :"<< d << std::endl;
//	::swap(a,b);
//	std::cout << "----------------------" << std::endl;
//	std::cout << "string one :"<< c << std::endl;
//	std::cout << "string two :"<< d << std::endl;
//	std::cout << "----------------------" << std::endl;
//	std::cout << "min :" << ::min(d,c) << std::endl;
//	std::cout << "max :" << ::max(c,d) << std::endl;
//	std::cout << "----------------------" << std::endl;
//
//}

int main() {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
