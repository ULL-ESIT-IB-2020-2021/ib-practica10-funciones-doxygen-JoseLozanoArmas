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
#include "cripto_funciones.cc"


int main (int argc, char* argv[]){
  Errores(argc, argv);  ///aplicamos la funcion de errores en caso de fallo al ejecutar el programa

  std::ifstream texto_introducido (argv[1]); ///durante todo este apartado declarmos variables y demás 
  std::ofstream texto_resultado {argv[2]};
  std::string convertir_metodo = argv[3];
  int metodo = stoi(convertir_metodo);
  
  std::string operacion = argv[5];
  std::string lineas;

   while ((std::getline(texto_introducido,lineas))) {
      std::getline(texto_introducido, lineas);  
      
  }

  //texto_resultado << DesencriptadoCesar(lineas,cesar);
 
  
  ///Esta sección esta dedicada a donde elegir el metodo de encriptado 
  /*switch(metodo){
    case 1:
    //Xor
      break;
    case 2:
    //cesar
      break;

  }*/
  
 
}
