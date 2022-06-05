//rock paper scissors 
#include <iostream>
#include <stdlib.h>
int main(){
  int user = 0;
  srand (time(NULL));
  std::string comout;
  std::string usout;
  int computer = rand() % 3 + 1;
  if (computer == 1){
    comout = "✊";
  }
  else if (computer == 2){
    comout = "🖐";
  }
  else if (computer == 3){
    comout = "✌️";
  }

  std::cout << "==================\n";
  std::cout << "rock papper scissors!\n";
  std::cout << "==================\n";
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "shoot (type 1, 2, 3)! ";
  std::cin >> user;
  if (user > 3 or user < 1){
    std::cout << "unvalid answer\n";
  }
  else{
    if (user == 1){
      usout = "✊";
    }
    else if (user == 2){
      usout = "🖐";
    }
    else if (user == 3){
      usout = "✌️";
    }
    std::cout << "You: " << usout << "\n";
    std::cout << "Computer: " << comout << "\n";

    if (user - computer == 1){
      std::cout << "you won!";

    }
    else if (computer - user == 2){
      std::cout << "you won!\n";
    }
    else if (user == computer){
      std::cout << "tie!\n";
    }
    else {
      std::cout << "you lost!\n";
    }

  }

}
