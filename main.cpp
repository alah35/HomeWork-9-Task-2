#include <iostream>

int main() {
  std::string guessNum, tryNum;
  std::cout << "Enter the first number: ";
  std::cin >> guessNum;
  std::cout << "Try to guess the number: ";
  std::cin >> tryNum;

  int input = std::stoi(guessNum), output = std::stoi(tryNum);
  do {
    std::cout << "Wrong numbers. Try again: ";
    std::cin >> guessNum >> tryNum;
    input = std::stoi(guessNum), output = std::stoi(tryNum);
  } while (input < 0 || output < 0 || input > 9999 
           || output > 9999);

  int bulls = 0, cows = 0;
  for (int i = 0; i < guessNum.length(); i++) {
    if (guessNum[i] == tryNum[i]) {
      bulls++;
      guessNum[i] = '!'; tryNum[i] = '*';
    }
  }

  for (int i = 0; i < guessNum.length(); i++) {
    for ( int j = 0; j < tryNum.length(); j++) {
      if (guessNum[i] == tryNum[j] && i != j) cows++;
    }
  }

  std::cout << "Bulls = " << bulls << " " << "Cows = " << cows 
            << std::endl;
 // std::cout << guessNum << " " << tryNum;
} 