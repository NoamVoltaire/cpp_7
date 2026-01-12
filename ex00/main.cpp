#include "whatever.hpp"

int	main(void)
{
	int a = 28;
	int b = 4;
	const int x = 1;
	const int y = 222;

	std::cout << "\na = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "after swap :\na = " << a << ", b = " << b << "\n";

	std::cout << "\nx = " << x << ", y = " << y << std::endl;
	std::cout << "min( x, y ) = " << ::min( x, y ) << std::endl;
	std::cout << "max( x, y ) = " << ::max( x, y ) << std::endl;

	const std::string c = "chaine1";
	const std::string d = "long_chaine2";
	//::swap(c, d);
	std::cout << "\nc = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	//min and max also compares string literal
	std::cout << "\nmin(\"chaine[1]\", \"chaine[2]\") ="
		<< min("chaine[1]", "chaine[2]") << std::endl;
	std::cout << "max(\"chaine[1]\", \"chaine[2]\") ="
		<< max("chaine[1]", "chaine[2]") << std::endl;
	std::cout << "max(\"chaine[1]\", \"biggest_chaine_here\") ="
		<< max("chaine[1]", "biggest_chaine_here") << std::endl;
	
}
