#include <bitset>
#include <iostream>
 
int main()
{
    std::bitset<4> codigo { 0b1100 };
 
    std::cout << codigo << '\n';
    std::cout << (codigo >> 1) << '\n'; // shift right by 1, yielding 0110
    std::cout << (codigo << 1) << '\n'; // shift left by 1, yielding 1000
 
    return 0;
}




/** ejemplo de lo de bitset

int main()
{
    std::bitset<4> codigo { 0b1100 };
 
    std::cout << codigo << '\n';
    std::cout << (codigo >> 1) << '\n'; // shift right by 1, yielding 0110
    std::cout << (codigo << 1) << '\n'; // shift left by 1, yielding 1000
 
    return 0;
}*/