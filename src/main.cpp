#include <iostream>
#include "./include/ft_pair.hpp"

int test_ft_pair() {
    // Test default constructor
    ft_pair<int, double> p1;
    std::cout << "Default-constructed pair: (" << p1.first << ", " << p1.second << ")" << std::endl;

    // Test constructor with two arguments
    ft_pair<int, double> p2(42, 3.14);
    std::cout << "Pair initialized with arguments: (" << p2.first << ", " << p2.second << ")" << std::endl;

    // Test copy constructor
    ft_pair<int, double> p3(p2);
    std::cout << "Copy-constructed pair: (" << p3.first << ", " << p3.second << ")" << std::endl;

    // Test assignment operator
    p1 = p2;
    std::cout << "Assigned pair: (" << p1.first << ", " << p1.second << ")" << std::endl;

    // Test make_pair function
    ft_pair<int, double> p4 = ft_make_pair(123, 456.789);
    std::cout << "make_pair result: (" << p4.first << ", " << p4.second << ")" << std::endl;

    return 0;
}


int main() {
	test_ft_pair();
	return 0;
}