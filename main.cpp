#include <iostream>
#include <vector>

int main() {


	int i = 77;
	char ch = 'a';
	int* ip = &i;
	double d = 3.21;
	bool is_it_big;
	std::vector<int>v(1000);

	std::cout << "size of int: " << sizeof(i) << ", " << sizeof(int) << std::endl;
	std::cout << "size of char: " << sizeof(ch) << ", " << sizeof(char) << std::endl;
	std::cout << "size of pointer to int: " << sizeof(ip) << ", " << sizeof(int*) << std::endl;
	std::cout << "size of double: " << sizeof(d) << ", " << sizeof(double) << std::endl;
	std::cout << "size of bool: " << sizeof(is_it_big) << ", " << sizeof(bool) << std::endl;
	std::cout << "size of vector: " << sizeof(v) << std::endl;


	return 0;
}