#include "Array.hpp"
//#include <iostream>

int main(void)
{
	try {
		// Test default constructor
		Array<int> defaultArray;
		std::cout << "Default array size: " << defaultArray.size() << "\n" << std::endl;
		
		// Test parameterized constructor
		Array<int> intArray(5);
		std::cout << "Int array size: " << intArray.size() << std::endl;

		// Assign values to the array
		for (unsigned int i = 0; i < intArray.size(); i++)
			intArray[i] = i * 10;
		// Print values
		std::cout << "Int array values: ";
		for (unsigned int i = 0; i < intArray.size(); i++)
			std::cout << intArray[i] << " ";
		std::cout << "\n" << std::endl;

		// Test copy constructor
		Array<int> copiedArray(intArray);
		std::cout << "Copied array values: ";
		for (unsigned int i = 0; i < copiedArray.size(); i++)
			std::cout << copiedArray[i] << " ";
		std::cout << std::endl;
		
		// Test const array [] operator
		const Array<int> constArray(intArray);
		std::cout << "Const copied array values: ";
		for (unsigned int i = 0; i < constArray.size(); i++)
			std::cout << copiedArray[i] << " ";
		// constArray[0] = 42; //should not compile
		std::cout << std::endl;

		// Test assignment operator
		Array<int> assignedArray;
		assignedArray = intArray;
		std::cout << "Assigned array values: ";
		for (unsigned int i = 0; i < assignedArray.size(); i++)
			std::cout << assignedArray[i] << " ";
		std::cout << "\n" << std::endl;


		// Test out-of-bounds access
		try
		{
			std::cout << "Accessing out-of-bounds index: " << intArray[10] << std::endl;
		} catch (const std::exception &e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Accessing empty array: " << defaultArray[0] << std::endl;
		} catch (const std::exception &e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}

		// Test with a different type
		Array<std::string> stringArray(3);
		stringArray[0] = "Hello";
		stringArray[1] = "World";
		stringArray[2] = "!";
		std::cout << "String array values: ";
		for (unsigned int i = 0; i < stringArray.size(); i++) {
			std::cout << stringArray[i] << " ";
		}
		std::cout << std::endl;

	} catch (const std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}