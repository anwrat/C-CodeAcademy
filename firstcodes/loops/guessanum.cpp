#include <iostream>

int main() {

  int guess;
  
  int tries = 0;

  std::cout << "I have a number 1-10.\n";
  std::cout << "Please guess it: ";
  std::cin >> guess;
 
  while (guess != 8 && tries < 3) {
  
  std::cout << "\nWrong guess, try again: ";
  std::cin >> guess;

  tries++;
 
  }
  if(guess==8){
    std::cout<<"\n Correct! The number was 8";
  } 
  else{
    std::cout<<"Aww, the number was 8";
  }
  return 0;
}