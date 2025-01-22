#include "iter.h"
#include <iostream>

template <typename T>
void printElement(T& element) {
    std::cout << element << " ";
}

template <typename T>
void doubleElement(T& element) {
    element *= 2;
}

int main() {
	int intArray[] = {1, 2, 3, 4, 5};
	std::size_t intArraySize = sizeof(intArray) / sizeof(intArray[0]);

	std::cout << "Original int array: ";
	iter(intArray, intArraySize, printElement);
	std::cout << std::endl;

	iter(intArray, intArraySize, doubleElement);

	std::cout << "Modified int array: ";
	iter(intArray, intArraySize, printElement);
	std::cout << std::endl;

	std::string strArray[] = {"apple", "banana", "cherry"};
	std::size_t strArraySize = sizeof(strArray) / sizeof(strArray[0]);

	std::cout << "Original string array: ";
	iter(strArray, strArraySize, printElement);
	std::cout << std::endl;

	return 0;
}
