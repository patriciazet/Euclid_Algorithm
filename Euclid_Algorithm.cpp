#include <iostream>

class Euclid_Algorithm
{
    
public:
    int calculate_NWD(int a, int b)
    {
        int x = 0;
        
        do
        {
            x = b;
            b = a % b;
            a = x;
        } while (b != 0);
        return a;
    }
};

int main()
{
    Euclid_Algorithm ea;
    std::cout << "NWD is: " << ea.calculate_NWD(27, 54) << std::endl;
}




