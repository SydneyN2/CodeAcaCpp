#include <iostream>

int main(){
  #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin); //in.txt name can be changed
    freopen("out.txt", "w", stdout); //in.txt name can be changed
  #endif

  int gryffindor;
  int hufflepuff;
  int ravenclaw;
  int slytherin;

  int answer1;
  int answer2;
  int answer3;
  int answer4;

  std::cout << "The Sorting Hat Quiz!\n";

  //questions1
  std::cout << "\n";
  std::cout << "Q1) When I'm dead, I want people to remember me as:\n";
  std::cout << "  1) The Good\n";
  std::cout << "  2) The Great\n";
  std::cout << "  3) The Wise\n";
  std::cout << "  4) The Bold\n";
  std::cout << "\n";
  std::cout << "Enter your answer (1, 2, 3, 4): ";
  std::cin >> answer1;

  if (answer1 == 1){
    hufflepuff++;
  }
  else if (answer1 == 2){
    slytherin++;
  }
  else if (answer1 == 3){
    ravenclaw++;
  }
  else if (answer1 == 4){
    gryffindor++;
  }
  else {
    std::cout << "Invalid input";
  }

  //question2
  std::cout << "\n";
  std::cout << "\n";
  std::cout << "Q2) Dawn or Dusk?";
  std::cout << "\n";
  std::cout << "  1) Dawn\n";
  std::cout << "  2) Dusk\n";
  std::cout << "\n";
  std::cout << "Enter your answer (1, 2): ";
  std::cin >> answer2;

  if (answer2 == 1){
    gryffindor++;
    ravenclaw++;
  }
  else if (answer2 == 2){
    hufflepuff++;
    slytherin++;
  }
  else {
    std::cout << "Invalid input";
  }

  //question 3
  std::cout << "\n";
  std::cout << "\n";
  std::cout << "Q3) Which kind of instrument most please your ear?\n";
  std::cout << " 1) The violin\n";
  std::cout << " 2) The trumpet\n";
  std::cout << " 3) The piano\n";
  std::cout << " 4) The drum\n";
  std::cout << "\n";
  std::cout << "Enter your answer (1, 2, 3, 4): ";
  std::cin >> answer3;

  if (answer3 == 1){
    slytherin++;
  }
  else if (answer3 == 2){
    hufflepuff++;
  }
  else if (answer3 == 3){
    ravenclaw++;
  }
  else if (answer3 == 4){
    gryffindor++;
  }
  else {
    std::cout << "Invalid input";
  }

  //question4
  std::cout << "\n";
  std::cout << "\n";
  std::cout << "Q4) Which road tempts you the most?\n";
  std::cout << "  1) The wide, sunny grassy lane\n";
  std::cout << "  2) The narrow, dark, lantern-lit alley\n";
  std::cout << "  3) The twisting, leaf-strewn path through woods\n";
  std::cout << "  4) The cobbled street lined (ancient buildings)\n";
  std::cout << "\n";
  std::cout << "Enter your answer (1, 2, 3, 4): ";
  std::cin >> answer4;

  if (answer4 == 1){
    hufflepuff++;
  }
  else if (answer4 == 2){
    slytherin++;
  }
  else if (answer4 == 3){
    gryffindor++;
  }
  else if (answer4 == 4){
    ravenclaw++;
  }
  else{
    std::cout << "Invalid input";
  }

  //scores
  int max = 0;
  std::string house;

  if(gryffindor > max){
    max = gryffindor;
    house = "Gryffindor";
  }
  if(hufflepuff > max){
    max = hufflepuff;
    house = "Hufflepuff";
  }
  if(ravenclaw > max){
    max = ravenclaw;
    house = "Ravenclaw";
  }
  if(slytherin > max){
    max = slytherin;
    house = "Slytherin";
  }

  std::cout << "\n";
  std::cout << "\n";
  std::cout << "Your house is " << house << "!\n";


}
