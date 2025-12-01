#include "whatever.hpp"

int	main(void)
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "\na = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	//min and max also compares string literal
	std::cout << "\nmin(\"chaine[1]\", \"chaine[2]\") ="
		<< min("chaine[1]", "chaine[2]") << std::endl;
	std::cout << "max(\"chaine[1]\", \"chaine[2]\") ="
		<< max("chaine[1]", "chaine[2]") << std::endl;
	
}
