#include <iostream>

int main() {
    int fib[60];
    
    fib[0] = 0;
    fib[1] = 1;
    
    for (int i = 2; i < 60; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    for (int i = 0; i < 60; i++) {
        std::cout << fib[i] << " ";
    }
    
    std::cout << std::endl;
    
    // Once your program is complete and works, check carefully the values printed on the screen.
    // Specifically, what is happening when the numbers approach two billions?
    // We expect that at some point the numbers start diverging from what they should be. 
    // Describe what you observe and explain why it is happening in a program comment.
    
    //// Once the numbers exceed the maximum size for a signed int (which the array is made of),
    //// the integers overflow and reach the minimum value (in the negative two billions).
    //// The numbers then continue increasing from this minimum point to complete the
    //// addition operation. This results in the numbers being different from what we expect.
    
    return 0;
}