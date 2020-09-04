//programapara preguntar nombre y decir hola
#include <iostream>
#include <string>

int main(int arg, char **argv)
{
std::string fullname;
std::cout <<"Hola, escribe tu nombre por favor:\n"; // el cout me dice que es desde la salida
std::getline(std::cin, fullname); //cin me dice que es desde la entrada para cuando hay un espacio el getline me trae todo la linea
std::cout << "Hola," <<fullname << std::endl; //std::endl sifnifica que imprime una nueva linea igual que el \n

return 0;

}