#include <bitset>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include "cripto_funciones.cc"

 


int main (){
  //captura la información del texto.
  std::ifstream texto_introducido {"fichero_entrada.txt"};
  std::ofstream texto_resultado {"fichero_salida.txt"};

  int contador_palabras = 0;
  
  while (texto_introducido){
    std::string lineas;
    int longitud = lineas.length();
    std::getline(texto_introducido,lineas);

     
   for (size_t i = 1; i < lineas.length(); i++){
    
     if (lineas[i] == ' ') {

       contador_palabras = contador_palabras + 1;

     }

   }


    }

    std::cout << contador_palabras << std::endl;
  }

  







