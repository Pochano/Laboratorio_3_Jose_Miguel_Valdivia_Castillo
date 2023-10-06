#include <iostream>

int main() {

  int num_ing;
  int suma = 0;

  std::cout << "Ingrese un número: ";
  std::cin >> num_ing;

  for(int x = 1; x <=  num_ing; x = x + 1){

    if(x%2 == 0){
      if(x == 2){
        std::cout << x << "\t";
        suma = suma + x;
      }
      continue;
    }
    else if(x%3 == 0){
      if(x == 3){
        std::cout << x << "\t";
        suma = suma + x;
      }
      continue;
    }
    else if(x%5 == 0){
      if(x == 5){
        std::cout << x << "\t";
        suma = suma + x;
      }
      continue;
    }
    else if(x%7 == 0){
      if(x == 7){
        std::cout << x << "\t";
        suma = suma + x;
      }
      continue;
    }
    else {
      
        
    std::cout << x << "\t";
    suma = suma + x;
    }
  }
  std::cout << "La suma de los primos es: " << suma;
}