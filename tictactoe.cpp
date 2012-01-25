// Kevin Mangan
// tictactoe.cpp
// Computer Science II
// Extra Credit

#include <iostream>
#include "tictactoe.h"
using namespace std;


void Tictactoe::scoreboard(){

	cout << "\n\tPlayer 1 (X) has won " << xcount << " times." << endl; // This is the scoreboard
	cout << "\n\tPlayer 2 (O) has won " << ocount << " times." << endl;
}

void Tictactoe::play(){

	displayBoard();
	
		while(!win()){  // While no one has won yet...
        	
				if(player == true)   // Alternates players
        				player = false;
        			else
        				player = true;
        	
				move(player);
			
        		}
        
			if(player == true){  // Once the game is won, the value of player will show which player has won the game
        			cout << "Player 1 (X) is the winner!" << endl;
				xcount++;}
        		else{
        			cout << "Player 2 (O) is the winner!" << endl;
				ocount++;}
		
			board[0] = '1'; // Erase board
			board[1] = '2';
			board[2] = '3';
			board[3] = '4';
			board[4] = '5';
			board[5] = '6';
			board[6] = '7';
			board[7] = '8';
			board[8] = '9';
			cout << "\n\tWould you like to keep playing? (y/n) " << endl;
			cin >> answer;
			if(answer == 'n')
				keep_playing=0;

}


void Tictactoe::displayBoard(){
        	
        	cout << "\n +--+--+--+--+" << endl; 
		cout << " | " <<  board[0] << " | " << board[1] << " | " << board[2] << " | " << endl;
        	cout << " +--+--+--+--+" << endl;
        	cout << " | " << board[3] << " | " << board[4] << " | " << board[5] << " | " << endl;
        	cout << " +--+--+--+--+" << endl;
        	cout << " | " << board[6] << " | " << board[7] << " | " << board[8] << " | " << endl;
		cout << " +--+--+--+--+" << endl;

}


bool Tictactoe::win(){
        
		if(board[0] == board[1] && board[0] == board[2] ) // First Row
        		return true;
        	else if(board[3] == board[4] && board[3] == board[5]) // Second Row
        		return true;
        	else if(board[6] == board[7] && board[6] == board[8]) // Third Row
        		return true;
        	else if(board[0] == board[3] && board[0] == board[6]) // First Column
        		return true;
        	else if(board[1] == board[4] && board[1] == board[7]) // Second Column
        		return true;
        	else if(board[2] == board[5] && board[2] == board[8]) // Third Column
        		return true;
        	else if(board[0] == board[4] && board[0] == board[8]) // First Diagonal
        		return true;
        	else if(board[2] == board[4] && board[2] == board[6]) // Second Diagonal
        		return true;
        	else
        		return false;
}


void Tictactoe::move(bool player){
        

       	if(player == true)
       		cout << "\nPlease enter your move Player 1: ";
       	else if(player == false)
       		cout << "\nPlease enter your move Player 2: ";
       
	cin >> position;				// Accepts the chosen position
       	
	
	if(legal(position)){ // if the position is not occupied...
            	
		if(player == true)
       			board[position-1] = 'X'; // Player 1's chosen spot is filled with X
            	else if(player == false)
            		board[position-1] = 'O'; // Player 2's chosen spot is filled with O
       
		
	 }
        else{
        
		cout << "\n\tThat is an illegal move!" << endl;   
	 	move(player);
	}	
         

   	displayBoard();
}


bool Tictactoe::legal(int position){


	if(board[position-1] == 'X' || board[position-1] == 'O') // If there is an X or O in the position
            	return false;
	else
            	return true;
       
}
