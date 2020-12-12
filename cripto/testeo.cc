#include <bitset>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "cripto_funciones.cc"



int main (int argc, char * argv[]){
  //captura la información del texto.
  std::ifstream texto_introducido { "fichero_de_prueba_encrip.txt"};
  std::ofstream texto_resultado {"fichero_de_prueba_desencrip.txt"};
  std::string lineas;
  std::string convertir_cesar = argv[2];
  int cesar = stoi(convertir_cesar);

    while ((std::getline(texto_introducido,lineas))) {
      std::getline(texto_introducido, lineas);  
      std::cout << lineas << std::endl;

        texto_resultado << EncriptadoCesar(lineas,cesar);
      

      

      




  }
  
  return 0;

  
}
 

/*//VERSION ENCRIPTAR CON CESAR
std::string Cesar_encriptado (std::string palabra);
  std::string palabra = argv[1];
  std::string convertir = argv[2];
  int cesar = stoi(convertir);
  char resultado;

  for (size_t i = 0; i < palabra.length(); i++){
    resultado = (palabra[i] + cesar);
    return resultado;
  }*/

  


 

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