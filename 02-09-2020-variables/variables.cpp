#include <iostream>

int main(int argc, char **argv)

{
  double x = -9.6e3; //64 bits, 8 bytes (10^307)
  long double y = -9.6e3;// decimales mas largos >64 bits
  float z = 10.54e-8;//32 bits 10^40
  int a = 578; //representa los enteros
  long int b = -982; //enteros con signo
  short int c = 99; //enteros pequeños
  char l = 'a';// definir caracteres
  bool flog = true;//solo trueo false

  std::cout << sizeof(short int) << std::endl;
  std::cout << sizeof(int) << std::endl;
  std::cout << sizeof(long int) << std::endl;
  //std::cout << sizeof(short int) << std::endl; me dice cuanta memoria ocupa los comandos
  std::cout << sizeof(double) << std::endl;
  std::cout << sizeof(long double) << std::endl;
  std::cout << sizeof(float) << std::endl;
  return 0;
}