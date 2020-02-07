
/*
 *Author: Isaac Martinez
 * 
 * 
 * 
 * 
 *purpose: dice and pig dice game
 *
 * 
 * no global, no double
 *
 * 
 * 7characters or less variables
 
 * 
 */













//system libraries
#include<iostream>   //Input - Output Library
#include<ctime>     //Time for rand
#include<iomanip> //Format the output
#include<cmath>  //Math functions
using namespace std;
//User Libraries none 

//Global Constants, NO Global variables!!!
//Conversions, Math, Physics constants only.


class Player{
string name;
bool turn;
int score;



 //Initialize variables


public:
  Player(string name){
   this->name = name;
   turn = false;
   score = 0;
  }
  Player(){
   name = "X";
   turn = false;
   score = 0;
  }
  Player(const Player &p){
   *this = p;
  }
  Player& operator=(const Player &p){
   name = p.name;
   turn = p.turn;
   score = p.score;
   return *this;
  }
  void setName(string n){
   name = n;
  }
  void Score(int sc){
   score = sc;
  }
  int Score()const{
   return score;
  }
  void Turn(bool t){
   turn = t;
  }
  bool Turn()const{
   return turn;
  }
  string Name()const{
   return name;
  }
};

class Dice{
public:
  int roll(){
   int randInteger;
   srand(static_cast<int>(time(0)));
   randInteger = (int)(1 + rand() % (6 - 1 + 1));
   return randInteger;
  }// roll percentage 
};
//Game Rules

class GameRules{
protected:
  
  Player p1;
  Player p2;

public:
  GameRules(Player a,Player b){
   p1 = a;
   p2 = b;
  }
  void setPlayer1(Player a){
   p1 = a;
  }
  void setPlayer2(Player b){
   p2 = b;// player variable
  }
  
  virtual void play() = 0;
};

class GameModeA:public GameRules{
Dice d1;



//Play the game the prescribed number of times.


public:
  GameModeA(Player a,Player b):GameRules(a,b){
  }
  void play(){
   p1.Turn(true);
   int n;
   char playerChoice;
   while(p1.Turn()){
    cout<<"\nScore = "<<p1.Score();
    cout << "\nIt Is "<<p1.Name()<<" Turn: Roll The Dice (R) or Hold Your Turn (H):";
                cin >> playerChoice;
                playerChoice = (toupper(playerChoice));
                if(playerChoice == 'H'){
                p1.Turn(false);
     p2.Turn(true);
     cout<<"\n"<<p1.Name()<<" Score = "<<p1.Score();
                break;
    }//end of dependent if-else
    n = d1.roll();
    if(n == 1){
     p1.Turn(false);
     p2.Turn(true);
     p1.Score(0);
     cout<<"\n"<<p1.Name()<<" Rolled a Pig ";
     cout<<"\n"<<p1.Name()<<" Score = "<<p1.Score();
     break;
    }//end of dependent if-else
    p1.Score(p1.Score() + n);
   }
   while(p2.Turn()){
    cout<<"\nScore = "<<p2.Score();
    cout << "\nIt Is "<<p2.Name()<<" Turn: Roll The Dice (R) or Hold Your Turn (H):";
                cin >> playerChoice;
                playerChoice = (toupper(playerChoice));
                if(playerChoice == 'H'){
                p2.Turn(false);
     p1.Turn(true);
     cout<<"\n"<<p2.Name()<<" Score = "<<p2.Score();
                break;
    }//end of dependent if-else
    n = d1.roll();//pig roll dice 1
    if(n == 1){
     p2.Turn(false);
     p1.Turn(true);
     cout<<"\n"<<p2.Name()<<" Rolled a Pig ";
     cout<<"\n"<<p2.Name()<<" Score = "<<p2.Score();
     break;
    }//end of dependent if-else
    p2.Score(p2.Score() + n);
   }//end of do-while
   if(p1.Score() > p2.Score()){
    cout<<"\nPlayer "<<p1.Name()<<" Win The Game ";
   }//end of dependent if-else
   else if(p1.Score() < p2.Score()){
    cout<<"\nPlayer "<<p2.Name()<<" win the Game ";
   }//end of dependent if-else
   else{
    cout<<"\nGame Draw ";
   }//end of else
  }
};

class GameModeB:public GameRules{
Dice d1;    //dice 1    
Dice d2;    //dice 2
public:
  GameModeB(Player a,Player b):GameRules(a,b){ //game modes
  }
  
  
  
  
  
   //Output the game statistics to the screen
  void play(){
   p1.Turn(true);
   int n,n1;
   char playerChoice;
   while(p1.Turn()){
    cout<<"\nScore = "<<p1.Score();
    cout << "\nIt Is "<<p1.Name()<<" Turn: Roll The Dice (R) or Hold Your Turn (H):";//choice of players to roll or not
                cin >> playerChoice;
                playerChoice = (toupper(playerChoice));
                if(playerChoice == 'H'){
                p1.Turn(false);
     p2.Turn(true);
     cout<<"\n"<<p1.Name()<<" Score = "<<p1.Score();
                break;
    }//Throw the dice again player 1
    n = d1.roll();
    n1 = d2.roll();
    if(n == 1 && n1 == 1){
     p1.Turn(false);
     p2.Turn(true);
     p1.Score(0);
     cout<<"\n"<<p1.Name()<<" Rolled a Pig ";
     cout<<"\n"<<p1.Name()<<" Score = "<<p1.Score();//total score of player one
     break;//end of switch
    }//end of switch
    p1.Score(p1.Score() + n + n1);//total scores added together
   }
   while(p2.Turn()){
    cout<<"\nScore = "<<p2.Score();
    cout << "\nIt Is "<<p2.Name()<<" Turn: Roll The Dice (R) or Hold Your Turn (H):";
                cin >> playerChoice;
                playerChoice = (toupper(playerChoice));
                if(playerChoice == 'H'){
                p2.Turn(false);
     p1.Turn(true);
     cout<<"\n"<<p2.Name()<<" Score = "<<p2.Score();//score of player two
                break;//swithc 
    }//end of switch
                //Throw the dice again player 2

    n = d1.roll();
    n1 = d2.roll();
    if(n == 1 && n1 == 1){
     p2.Turn(false);
     p1.Turn(true);
     p2.Score(0);
     cout<<"\n"<<p2.Name()<<" Rolled a Pig ";
     cout<<"\n"<<p2.Name()<<" Score = "<<p2.Score();//score 2 of player
     break;
    }//end of switch
    p2.Score(p2.Score() + n + n1);//total score of player 2
   }
   if(p1.Score() > p2.Score()){
    cout<<"\nPlayer "<<p1.Name()<<" Win The Game ";//if player one wins
   }//end of dependent if-else
   else if(p1.Score() < p2.Score()){
    cout<<"\nPlayer "<<p2.Name()<<" win the Game ";//if player two wins
   }//end of dependent if-else
   else{
    cout<<"\nGame Draw ";// game ends in draw
   }
  }// end of else
};
//Execution begins here




int main(){
char gameChoice;
cout << "What Would You Like To Play Today?\n A for Game A\n B for Game B\n\n E to EXIT\n" << endl;// choice of player
cin >> gameChoice;
gameChoice = (toupper(gameChoice));
if(gameChoice == 'E'){
  cout << "Thanks For Playing, Let's Play Again Soon!" << endl;
        system("pause");
        return 0;
}//end of independent if statement 
Player p1,p2;
string s1;
cout<<"\nEnter Player 1 Name : ";//display of player 1 name to enter 
cin>>s1;
p1.setName(s1);
cout<<"\nEnter Player 2 Name : ";//display of player 2 name to enter
cin>>s1;
p2.setName(s1);
if(gameChoice == 'A'){  //choice of  game between a  and b
  GameModeA g(p1,p2);
  g.play();
}else if(gameChoice == 'B'){
  GameModeB g(p1,p2);
  g.play();
}else{
  cout<<"\n Wrong Choice ";// incorrect key
}//end of else
}// end of game 