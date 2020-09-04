// contar el numero de argumentos y mostrarlos
#include <iostream>


int main(int argc, char **argv) 
{
std::cout << argc << std::endl; // me dice el número de argumentos que mando en la linea de comandos.
std::cout << argv[0] << std::endl; // me indica el primer argumento
std::cout << argv[1] << std::endl;//me indica el segundo argumento
return 0;
}