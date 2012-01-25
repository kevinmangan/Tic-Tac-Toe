// Kevin Mangan
// TicTacToe Extra Credit Driver

#include <iostream>
#include "tictactoe.h"
using namespace std;

int main(){

	Tictactoe t;
	while(t.keep_playing == 1){
		t.play();
	}

	t.scoreboard();


}
