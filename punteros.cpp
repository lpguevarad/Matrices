#include <iostream>

int main()
{
  int a=10;
  int * ptr = & a;
  std::cout << ptr <<"\n";//imprime direccion de memoria
  std::cout << &a <<"\n";//imprime direcci�n de memoria. Es igual a "ptr"
  std::cout << &ptr <<"\n";//imprime direcci�n de puntero
  std::cout << *ptr <<"\n";//imprime el valor guardado en esa direcci�n de memoria
}
