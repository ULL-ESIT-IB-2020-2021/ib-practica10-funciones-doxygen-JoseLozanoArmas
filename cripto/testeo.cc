#include <bitset>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "cripto_funciones.cc"



std::string EncriptarXor(std::string lineas,int longitud, std::string clave){
  std::string criptado, resultado;
  int numero_criptado;
  int numero_clave;
  int numero_palabra;

  //numero_clave[i]= int(k[i]);
    for(size_t i = 0; i <= longitud + 1; i++){
      numero_clave[i] = int(clave[i]);
      numero_palabra[i] = int(lineas[i]);
      numero_criptado[i] = (numero_palabra[i]^ numero_clave[i]);
      criptado[i] = (char(numero_criptado[i]));
      resultado = resultado + criptado[i];
    }
    return resultado;


} 
/*std::string DesencriptarXor(std::string frase,int longitud, std::string k){
    for(int i=0; i<=longitud+1;i++){
      numero_clave[i]= int(k[i]);
      numero_palabra[i]= int(frase[i]);
      numero_criptado[i]= (numero_palabra[i]^numero_clave[i]);
      criptado[i]=(char(numero_criptado[i]));
      resultado+= criptado[i];
    }

    return resultado;

}*/



int main (){
  //captura la información del texto.
  std::ifstream texto_introducido {"fichero_entrada.txt"};
  std::ofstream texto_resultado {"fichero_salida.txt"};
  std::string clave = "caca";

  while (texto_introducido){
    std::string lineas;
    int longitud = lineas.length();
    std::getline(texto_introducido,lineas);

    texto_resultado << EncriptarXor(lineas,longitud,clave);
   

    }



  }

  


















/*std::string palabra = "ayer";
      std::string clave = "alfa";
      std::string resultado;

      int convertir_palabra = 0;
      int convertir_clave = 0;
      int resultado_numerico = 0;

      std::cout << palabra << std::endl;
      std::cout << clave << std::endl;

      for (size_t i = 0, j = 0; i < palabra.length(); i++, j++){
        convertir_palabra = int (palabra[i]);
        convertir_clave = int (clave[i]);
        std::cout << convertir_palabra << std::endl;
        std::cout << convertir_clave << std::endl;

        resultado = (convertir_clave ^ convertir_palabra);
        std::cout << resultado << std::endl;
      }*/







      /*for (size_t i = 0; i < palabra.length(); i++){
        
        convertir_palabra = int (palabra[i]);
        std::cout << palabra[i] << std::endl;
        std::cout << convertir_palabra << std::endl;

      }*/
    

        //std::cout << ((std::bitset<10>{clave[i]} ^ std::bitset<10>{pre_conversion})) << std::endl;
        
        
  

  






       
       

 

   

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