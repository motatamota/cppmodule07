#include "whatever.h"
#include <iostream>

int main( void ) {
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

// int	main()
// {
// 	int	a = 1;
// 	int	b = 2;

// 	std::cout << "start: " << a << ", " << b << std::endl;
// 	std::cout << "min: " << ::min(a, b) << std::endl;
// 	std::cout << "max: " << ::max(a, b) << std::endl;
// 	swap(a, b);
// 	std::cout << "swap: " << a << ", " << b << std::endl << std::endl;

// 	a = 1;
// 	b = 1;
// 	std::cout << "start: " << a << ", " << b << std::endl;
// 	std::cout << "min: " << ::min(a, b) << std::endl;
// 	std::cout << "max: " << ::max(a, b) << std::endl;
// 	swap(a, b);
// 	std::cout << "swap: " << a << ", " << b << std::endl << std::endl;

// 	float af = 0.5;
// 	float bf = 0.8;
// 	std::cout << "start: " << af << ", " << bf << std::endl;
// 	std::cout << "min: " << ::min(af, bf) << std::endl;
// 	std::cout << "max: " << ::max(af, bf) << std::endl;
// 	swap(af, bf);
// 	std::cout << "swap: " << af << ", " << bf << std::endl << std::endl;

// 	std::string as = "test1";
// 	std::string bs = "test2";
// 	std::cout << "start: " << as << ", " << bs << std::endl;
// 	std::cout << "min: " << ::min(as, bs) << std::endl;
// 	std::cout << "max: " << ::max(as, bs) << std::endl;
// 	swap(as, bs);
// 	std::cout << "swap: " << as << ", " << bs << std::endl << std::endl;
// }
