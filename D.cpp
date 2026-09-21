#include <iostream>

class D {
private:
    double D1;
    bool D2;

public:
    void MD1() { 
        std::cout << "Metodo MD1 executado" << std::endl; 
    }
    
    void MD2() { 
        std::cout << "Metodo MD2 executado" << std::endl; 
    }

    void MD4() { 
        std::cout << "MD4" << std::endl; 
    }
};
