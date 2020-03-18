#include <iostream>
#include <fstream>
#include <string>

int main() {
  string x = "a b c d e f g"
  istringstream stm(x);
  
  string one;
  string two;
  int i = 0;
  
  while (i <= 1) {
    if (i == 0) {
      stm >> one;
    }
    if (i == 1) {
      stm >> two;
    }
    
    i++;
  }
}
