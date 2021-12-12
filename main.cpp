#include <iostream>

int main() {
  std::string input, output;
  std::cout << "Enter first number: ";
  std::cin >> input;
  std::cout << "Enter second number: ";
  std::cin >> output;

  int bulls = 0, cows = 0;
  for (int i = 0; i < input.length(); i++) {
    if (input[i] == output[i]) {
      bulls++;
      input[i] = '!';
    }
  }
  for (int i = 0; i < input.length(); i++) {
    if ( input[i] != output[i]
          && output.find(input[i]) != std::string::npos
          && output[output.find(input[i])] 
          != input[output.find(input[i])] ) 
    cows++;
  }
  std::cout << "Bulls = " << bulls << " Cows = " << cows << "\n";
} 