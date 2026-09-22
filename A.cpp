#include <iostream>

class A
{
private:
    int A1, a, b;
    float A2;

public:
    // Getters e Setters
    int getA1() { return A1; }
    void setA1(int a1) { A1 = a1; }

    float getA2() { return A2; }
    void setA2(float a2) { A2 = a2; }

    // Métodos da classe
    void MA1()
    {
        std::cout << "MA1" << std::endl;
    }

    void MA2()
    {
        std::cout << "MA2" << std::endl;
    }

    void MA3()
    {
        std::cout << "Alteracao a classe A partir do clone" << std::endl;
    }

    void getSoma(int a, int b)
    {
        std::cout << a + b;
    }
};