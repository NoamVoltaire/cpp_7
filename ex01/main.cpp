#include "iter.hpp"

int	main(void)
{
	char	txt[6] = "hello";
	const char	consttxt[6] = "const";
	int	tab[] = {1,2,3,4,5};
	size_t	len = 6;

	std::cout << txt << std::endl;
	::iter(txt, len, plus_one);
	std::cout << txt << std::endl;
	
	//::iter(consttxt, len, plus_one); // should not compile
	::iter(consttxt, len, print_elems);
	std::cout << std::endl;

	::iter(tab, sizeof(tab) / sizeof(int), print_elems);
	std::cout << std::endl;
	::iter(tab, sizeof(tab) / sizeof(int), plus_one);
	::iter(tab, sizeof(tab) / sizeof(int), print_elems);
	std::cout << std::endl;
}
