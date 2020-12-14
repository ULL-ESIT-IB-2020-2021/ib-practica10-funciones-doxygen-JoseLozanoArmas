/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file cripto_main.cc
  * @author José Lozano Armas alu0101392561@ull.edu.es
  * @date -------------------------
  * @brief El programa al introducirle un fichero de texto, se encargará de encriptarlo o desencriptarlo 
  *        en base a los argumentos que se le pasen. 
  * @bug 
  * @see  https://es.wikipedia.org/wiki/Cifrado_XOR
  *       https://es.wikipedia.org/wiki/Cifrado_C%C3%A9sar
  */
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "cripto_funciones.cc"


int ContarPalabras(std::string lineas) {
     int contador_palabras = 0;
   for (size_t i = 0; i < lineas.length(); i++){
    
     if (lineas[i] == ' ') {

       contador_palabras = contador_palabras + 1;

     }
     return contador_palabras;
   }
     
}




int main (int argc, char* argv[]){
  Errores(argc, argv);  ///aplicamos la funcion de errores en caso de fallo al ejecutar el programa

  std::ifstream texto_introducido (argv[1]); ///durante todo este apartado declarmos variables y demás 
  std::ofstream texto_resultado (argv[2]);
  std::string metodo = argv[3];
  std::string convertir_clave_cesar = argv[4];
  int clave_cesar = stoi(convertir_clave_cesar);
  std::string clave_xor = argv[4];

  std::string operacion = argv[5];
  std::string lineas;
  int longitud = lineas.length();

   while ((std::getline(texto_introducido,lineas))) {
      std::getline(texto_introducido, lineas);  

      if (metodo == "1" ) {
        if (operacion == "+"){
          texto_resultado << EncriptarXor(lineas,longitud, clave_xor);
        }
        if (operacion == "-"){
          texto_resultado << DesencriptarXor(lineas,longitud,clave_xor);
        }
      }

      if (metodo == "2" ) {
        if (operacion == "+"){
          texto_resultado << EncriptadoCesar(lineas, clave_cesar);
        }
        if (operacion == "-"){
          texto_resultado << DesencriptadoCesar(lineas, clave_cesar);
        }
      }
  }

  
 
}
