#include <iostream>

class B {
private:
    int B1;
    float B2;

public:
    int getB1() { return B1; }
    void setB1(int b1) { B1 = b1; }

    float getB2() { return B2; }
    void setB2(float b2) { B2 = b2; }

    void MB1() { std::cout << "MB1" << std::endl; }
    void MB2() { std::cout << "MB2" << std::endl; }
    
    void MB3() { 
        std::cout << "MB3" << std::endl; 
    }
};