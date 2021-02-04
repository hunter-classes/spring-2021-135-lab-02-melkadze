#include <iostream>
#include "funcs.h"

int main() {
    std::cout << "Result of print_interval(-5, 10): ";
    print_interval(-5, 10);
    
    std::cout << "Result of print_interval(-15, 15): ";
    print_interval(-15, 15);
    
    std::cout << "Result of print_interval(1, 2): ";
    print_interval(1, 2);
    
    std::cout << "Result of print_interval(1000, 1007): ";
    print_interval(1000, 1007);
    
    return 0;
}