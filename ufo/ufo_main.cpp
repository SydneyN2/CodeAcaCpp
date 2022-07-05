//ufo.cpp


#include <iostream>
#include "ufo_f.hpp"
//uncomment the line below to use for sublime i think
//#include "ufo_f.cpp"
using namespace std;



int main(){
	greet();
	std::string codeword = "codeacademy";
	std::string answer = "___________";
	int misses = 0;
	std::vector<char> incorrect;
	bool guess = false;
	char letter;

	while (answer != codeword && misses < 7){
		display_status(incorrect, answer);
		display_misses(misses);
		cout << "Please enter your guess: ";
		cin >> letter;
		for (int x = 0; x < codeword.length(); x++){
			if (letter == codeword[x]){
				answer[x] = letter;
				guess = true;
			}
		}
		if (guess == true){
			cout << "Correct";

		}
		else {
			cout << "\nIncorrect! the tractor beam pulls the person in further.";
			incorrect.push_back(letter);
			misses++;
		}
	guess = false;
	
		
		
	}

	

end_game(answer, codeword);
	






}
