#include <iostream>


int main() {

  int limite, 
  int nume = 2;

  std::cout << "Ingrese el limite ";
  std::cin >> limite;

  int count = 0;

  while (count < n) {

    int sum = 0;

    for (int i = 1; i <= limite / 2; i++) {
      if (nume % i == 0) {
        sum += i;
      }
    }

    if (sum == nume) {
        std::cout << nume << " ";
      count++;
    }

    nume++;
  }
}