#include <iostream>

int main() {
  int num1 = 1;
  int num2 = 1;
  int limite;

  std::cin >> limite;

  while(num1 <= limite){
    std::cout << num1 << "\t";
    num1 = num1 + num2;
    num2 = num1 - num2;
      }
  
}