/* 
 * File:main.cpp   
 * Author: Isaac Martinez
 * Created on 02/09/20
 * Purpose:  
 */
//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
void showBoard(string [3][3]);
void playerTurn(int, int, int , string, string [3][3]);
bool win(string [3][3], string, int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int row = 0, col = 0;
    int go = 0;
    string pawn = "*";
    bool end = false;
    string board[3][3] = {{"*","*","*"},{"*","*","*"},{"*","*","*"}};
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    while (!end){
        for(int i = 0; i<=9,!end;i++){
            if(i%2==0){
                go = 1;
                pawn = "X";
            }
            else{
                go = 2;
                pawn = "O";
            }
            showBoard(board);
            cout << "Player " << go << " select location:" << endl;
            cin >> row >> col;
            row = row - 1;
            col = col - 1;
            playerTurn(row, col, go, pawn, board);
            end = win(board, pawn, go);
            
            if(i>9){
                cout << "Tie Game" << endl;
                end = true;
            }
        }
    }





    //Exit stage right!
    return 0;
}

void showBoard(string board[3][3]){
    cout << board[0][0] << "|" << board[0][1] << "|" << board[0][2] << endl;
    
    cout << "-" << "|"<< "-" << "|"<< "-" << endl;
    
    cout << board[1][0] << "|" << board[1][1] << "|" << board[1][2] << endl;
    
    cout << "-" << "|"<< "-" << "|"<< "-" << endl;
    
    cout << board[2][0] << "|" << board[2][1] << "|" << board[2][2] << endl;
}

void playerTurn(int row,int col, int go, string pawn, string board[3][3]){
    board[row][col] = pawn;
}

bool win(string board[3][3],string pawn, int go){
    for(int i =0; i<3; i++){
        if(board[i][0] == pawn && board[i][1] == pawn && board[i][2] == pawn){
            cout << "Player " << go << " has won";
            return true;   
        }
        else if(board[0][i] == pawn && board[1][i] == pawn && board[2][i] == pawn){
            cout << "Player " << go << " has won";
            return true;   
        }
        else if(board[i][0] == pawn && board[i+1][1] == pawn && board[i+2][2] == pawn){
            cout << "Player " << go << " has won";
            return true;   
        }
        else{
            return false;
        }
    }
}