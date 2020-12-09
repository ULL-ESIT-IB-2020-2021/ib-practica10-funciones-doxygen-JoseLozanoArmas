#include <bitset>
#include <iostream>
#include <string>
#include "cripto.h"

int main (int argc, char * argv[]){
  
}

  


 

/*AÑADIR FUNCION QUE SE SI...

std::string parametro_operacion{argv[5]};

if (parametro_operacion == "+"){
    xor 
}
if (parametro_operacion == "-"){
    cesar
}

*/

/*AÑADIR FUNCION QUE SE SI...

std::string parametro_encriptacion{argv[3]};


if (parametro_encriptacion == "1"){
    xor 
}
if (parametro_encriptacion == "2"){
    cesar
}

*/

/*int main() //EJEMPLO DE COMO FUNCIONAR XOR. SI SOLO 1 ES VALIDO DA 1 SI HAY MAS DA 0
{
    std::bitset<4> codigo { 0b100 };
    std::bitset<4> prueba { 0b111 };

    std::cout << codigo << std::endl;
    std::cout << prueba << std::endl;
 
    std::cout << (std::bitset<4>{codigo} ^ std::bitset<4>{prueba} ) << std::endl;

    return 0;
}*/




/** ejemplo de lo de bitset

int main()
{
    std::bitset<4> codigo { 0b1100 };
 
    std::cout << codigo << '\n';
    std::cout << (codigo >> 1) << '\n'; // shift right by 1, yielding 0110
    std::cout << (codigo << 1) << '\n'; // shift left by 1, yielding 1000
 
    return 0;
}*/