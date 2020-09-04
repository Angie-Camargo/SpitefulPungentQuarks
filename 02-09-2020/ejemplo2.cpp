//programapara preguntar nombre y decir hola
#include <iostream>
#include <string>

int main(int arg, char **argv)
{
std::string fullname;
std::cout <<"Hola, escribe tu nombre por favor:\n";
std::getline(std::cin, fullname);
std::cout << "Hola," <<fullname << std::endl;

return 0;

}