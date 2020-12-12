/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file cripto.h
  * @author José Lozano Armas alu0101392561@ull.edu.es
  * @date -------------------------
  * @brief En este apartado encontrará las declaraciones de las funciones incluidas en el programa
  * @bug 
  * @see https://es.wikipedia.org/wiki/Cifrado_XOR
  *      https://es.wikipedia.org/wiki/Cifrado_C%C3%A9sar 
  */

 #include <iostream>

 
 void Errores (int argc, char * argv[]); 
 std::string EncriptadoCesar(std::string lineas,int cesar);
 std::string DesencriptadoCesar(std::string lineas,int cesar);