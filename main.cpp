#include <iostream>

int main() {
  std::string input, output;
  std::cout << "Enter first number: ";
  std::cin >> input;
  std::cout << "Enter second number: ";
  std::cin >> output;

  int bulls = 0, cows = 0;
  for (int i = 0; i < input.length(); i++) {
    for (int j = 0; j < output.length(); j++) {
      if (input[i] == output[j] && i == j) {
        bulls++;
        break;
      }
      else if (input[i] == output[j]) cows++;
    }
  }
  std::cout << "Bulls = " << bulls << " Cows = " << cows << "\n";
} 