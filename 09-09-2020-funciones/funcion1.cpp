#include <iostream>

const int a = 20 // definicion variable global a NUNCA USAR SOLO int a

void print_message(double a) //siempre nombrar antes la funcion
{
std::cout << "Hello world \n";
std::cout << "parametro a: " << a << "\n";
std::cout << "Direccion de a en print: " << &a << std::endl;
}
int main (void)
{
  int a = 12; //tengo que definir una variable algo que le mando al paramtro a para esto se define una variable local
  std::cout << "Direccion de a en main: " << &a << std::endl; // me dice en que parte de la memoria se encuentra la variable ya que las llamé igual.
  print_message(a); //como lo que necesito es imprimir un mensaje llamo a esta función
  return 0;
}