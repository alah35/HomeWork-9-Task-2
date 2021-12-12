#include <iostream>

int main() {
  std::string input, output;
  std::cout << "Enter first number: ";
  std::cin >> input;
  std::cout << "Enter second number: ";
  std::cin >> output;

  int bulls = 0, cows = 0;
  for (int i = 0; i < output.length(); i++) {
    for (int j = 0; j < input.length(); j++) {
      if (output[i] == input[j] && i == j) bulls++;
      else if (output[i] == input[j]) cows++;
    }
  }
  std::cout << "Bulls = " << bulls << " Cows = " << cows << "\n";
} 