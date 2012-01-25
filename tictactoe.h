// Kevin Mangan
// Computer Science II
// Tic Tac Toe Extra Credit

#ifndef TICTACTOE_H
#define TICTACTOE_H

class Tictactoe{

	public:
		Tictactoe(){

			keep_playing = 1;
        		xcount = 0; // How many times X has won
        		ocount = 0; // How many times O has won
        		player = false;
			board[0] = '1';
			board[1] = '2';
			board[2] = '3';
			board[3] = '4';
			board[4] = '5';
			board[5] = '6';
			board[6] = '7';
			board[7] = '8';
			board[8] = '9';			
		}

		void displayBoard();
		bool win();
		void move(bool);
		bool legal(int);
		void play();
		void scoreboard();
		int keep_playing;
	
	private: 
		char board[9];
		int position;
		char answer;
		int xcount; // How many times X has won
		int ocount; // How many times O has won
		bool player;
};


#endif
