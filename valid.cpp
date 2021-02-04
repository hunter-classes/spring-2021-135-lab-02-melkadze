#include <iostream>

int main() {
    std::cout << "Please enter an int such that 0 < n < 100: ";
    
    int input;
    
    std::cin >> input; //allow a valid answer before printing new text
    
    while (input < 1 || input > 99) {
        std::cout << "Please re-enter: ";
        std::cin >> input;
    }
    
    std::cout << "Number squared is " << input*input << std::endl;
    
    return 0;
}