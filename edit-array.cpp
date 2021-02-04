#include <iostream>

int main() {
    //1: create
    int myData[10];
    
    //2: fill
    for (int i = 0; i < 10; i++) {
        myData[i] = 1;
    }
    
    //3: print
    
    //for later
    bool error = false;
    
    do {
        //3: print
        for (int i = 0; i < 10; i++) {
            std::cout << myData[i] << " ";
        }
        
        std::cout << std::endl;
        
        //4: prompt
        int i;
        int v;
        
        std::cout << "Input index: ";
        std::cin >> i;
        
        std::cout << "Input value: ";
        std::cin >> v;
        
        //5: verify
        if (i > 9 || i < 0) {
            error = true;
            
            std::cout << "Index out of range. Exit." << std::endl;
        } else {
            myData[i] = v;
            
            std::cout << std::endl;
        }
    } while (!error);
    
    return 0;
}