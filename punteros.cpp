#include <iostream>

int main()
{
  int a=10;
  int * ptr = & a;
  std::cout << ptr <<"\n";//imprime direccion de memoria
  std::cout << &a <<"\n";//imprime dirección de memoria. Es igual a "ptr"
  std::cout << &ptr <<"\n";//imprime dirección de puntero
  std::cout << *ptr <<"\n";//imprime el valor guardado en esa dirección de memoria
}
