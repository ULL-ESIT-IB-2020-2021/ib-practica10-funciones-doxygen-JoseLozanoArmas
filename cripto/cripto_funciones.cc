/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file cripto_main.cc
  * @author José Lozano Armas alu0101392561@ull.edu.es
  * @date -------------------------
  * @brief En este apartado encontrará las funciones que ponen en marcha el programa, asi como algunos comentarios
  * sobre las mismas. 
  * @bug 
  * @see https://es.wikipedia.org/wiki/Cifrado_XOR
  *      https://es.wikipedia.org/wiki/Cifrado_C%C3%A9sar 
  */


#include <iostream>
#include "cripto.h"



//Encriptar XOR
/*int main (int argc, char * argv[]){
  std::string palabra = argv [1];
  const std::string clave = argv [2];
  const int pre_conversion = 128;

  for (size_t i = 0 ; i < palabra.length(); i++){
    std::cout << palabra[i] << std::endl;
    std::cout << ((std::bitset<10>{clave[i]} ^ std::bitset<10>{pre_conversion}) ^ std::bitset<10>{palabra[i]}) << std::endl;
  }

  return 0;
}*/


  //VERSION ENCRIPTAR CON CESAR 
  std::string EncriptadoCesar(std::string lineas,int cesar){
  std::string resultado;
  std::string suma_letras;
  for (size_t i = 0; i < lineas.length(); i++){
    resultado = (lineas[i] + cesar);
    suma_letras = suma_letras + resultado;
  } 

  return suma_letras;
  }

   //VERSION DESENCRIPTAR CON CESAR 
  std::string DesencriptadoCesar(std::string lineas,int cesar){
  std::string resultado;
  std::string suma_letras;
  for (size_t i = 0; i < lineas.length(); i++){
    resultado = (lineas[i] - cesar);
    suma_letras = suma_letras + resultado;
  } 

  return suma_letras;
  }





void Errores (int argc, char * argv[]){
  if (argc != 2) {   //Aquí situo la condición de error
  std::cout << argv[0] << "./cripto -- Cifrado de ficheros" << std::endl
  << "Modo de uso: ./cripto fichero_entrada fichero_salida método password operación" << std::endl
  << "Pruebe ./cripto --help para más información" << std::endl; 
    exit(EXIT_SUCCESS);
  }
   
  std::string parameter{argv[1]};

  if (parameter == "--help") { //Aquí la parte del comando --help
    std::cout << "./cripto -- Cifrado de ficheros" << std::endl
    << "Modo de uso: ./cripto fichero_entrada fichero_salida método password operación" << std::endl
    << "fichero_entrada: Fichero a codificar" << std::endl
    << "fichero_salida:  Fichero codificado" << std::endl
    << "método:          Indica el método de encriptado" << std::endl
    << "                 1: Cifrado xor " << std::endl
    << "                 2: Cifrado de César" << std::endl
    << "password:        Palabra secreta en el caso de método 1, Valor de K en el método 2"
    << "operación:       Operación a realizar en el fichero" << std::endl
    << "                   +: encriptar el fichero" << std::endl
    << "                   -: desencriptar el fichero" << std::endl;

    exit(EXIT_SUCCESS);
  } 

}







 




