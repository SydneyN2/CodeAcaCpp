//this broke me

//tictactoe 
#include <iostream>
#include <vector>
using namespace std;

//declared variables
vector<char> out = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int in = 2;
char player_out;
bool loose = false;
int x;
bool filled = false;
int ti = 0;


bool end(){ //won yet?
	
	//horizontal
	if ((out[1] == out[2]) && (out[3] == out[2])){
		loose = true;
	}
	else if ((out[4] == out[5]) && (out[6] == out[5])){
		loose = true;
	}
	else if ((out[7] == out[8]) && (out[9] == out[8])){
		loose = true; 
	}

	//vertical
	else if ((out[1] == out[4]) && (out[7] == out[1])){
		loose = true;
	}
	else if ((out[2] == out[5] && out[8] == out[2])){
		loose = true;
	}
	else if ((out[3] == out[6] && out[9] == out[3])){
		loose = true;
	}
	else if ((out[1] == out[5] && out[9] == out[5])){
		loose = true;
	}
	else if ((out[3] == out[5] && out[7] == out[5])){
		loose = true;
	}
	else if (ti == 5){
		loose = true;
	}
	else{
		loose = false;
	}

	return loose;
}

void game_start_display(){ //display the board
	
cout << "      |      |      \n";
cout << "  " << out[1] << "   |  " << out[2] << "   |  " << out[3] << "    \n";
cout << "______|______|______\n";
cout << "      |      |      \n";
cout << "  " << out[4] << "   |  " << out[5] << "   |  " << out[6] << "    \n";
cout << "______|______|______\n";
cout << "      |      |      \n";
cout << "  " << out[7] << "   |  " << out[8] << "   |  " << out[9] << "    \n";
cout << "      |      |      \n\n";
}
int change_player(){ //take turn 1st and 2nd player
	if (in == 1){
		in++;
	}
	else{
		in--;
		ti++;
	}
	return in;
}

bool filled_f() { //check if the spot is filled
	if (out[x] != 'X' and out[x] != 'O'){
		filled = true;
		out[x] = player_out; //fill the input into the spot
	}
	else {
		cout << "The square has already been used!\n";
		filled = false;
	}

	return filled;
}

char player_out_f(){ //change output sign for each players (X, O)
	if (in == 1){
		player_out = 'X';
	}
	else if (in == 2){
		player_out = 'O';
	}
	return player_out;

}

void c_player_display(){ //tell players to enter a number
		cout << "Player " << in << "'s turn (" << player_out << "), please enter a number:\n";
	}

int main(){


//intro
	
	cout << "\nTIC TAC TOE\n";
	cout << "NOTE: please do not enter anything beside numbers! The game crash easily\n";
	cout << "============================\n\n";
	game_start_display();



	while(loose == false){  //when the game is still happening
		change_player(); //change player (player start is set 2 so this comes first and change it to 1)
	    player_out_f(); //change 
		c_player_display(); //ask for input
		filled = false;
		

		while(filled == false){ //when the there is no input yet (the spot is not filled)
			cin >> x; // input
			if (x > 0 && x < 10){ //check if input is in range 1-9
				filled_f(); //check if the spot is occupied
			}
			else  { //if input is out of range
				cout << "Invalid! Enter again!\n"; 
				filled = false; //repeat the asking input circle (the while)
			}

		}
	
		game_start_display(); //output the board again with new char (X or O)
		end(); //check if anyone's won yet, if no, repeat the circle

}	
	if (ti == 5){
		cout << "TIE! GG\n";
	}
	else {
		cout << "Player " << in << " WON! GG\n";
	}
}	
