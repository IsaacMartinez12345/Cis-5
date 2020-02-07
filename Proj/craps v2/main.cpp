#include<iostream>
#include<ctime>

using namespace std;

class Player{
string name;
bool turn;
int score;

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
  }
};

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
   p2 = b;
  }
  
  virtual void play() = 0;
};

class GameModeA:public GameRules{
Dice d1;

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
    }
    n = d1.roll();
    if(n == 1){
     p1.Turn(false);
     p2.Turn(true);
     p1.Score(0);
     cout<<"\n"<<p1.Name()<<" Rolled a Pig ";
     cout<<"\n"<<p1.Name()<<" Score = "<<p1.Score();
     break;
    }
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
    }
    n = d1.roll();
    if(n == 1){
     p2.Turn(false);
     p1.Turn(true);
     cout<<"\n"<<p2.Name()<<" Rolled a Pig ";
     cout<<"\n"<<p2.Name()<<" Score = "<<p2.Score();
     break;
    }
    p2.Score(p2.Score() + n);
   }
   if(p1.Score() > p2.Score()){
    cout<<"\nPlayer "<<p1.Name()<<" Win The Game ";
   }else if(p1.Score() < p2.Score()){
    cout<<"\nPlayer "<<p2.Name()<<" win the Game ";
   }else{
    cout<<"\nGame Draw ";
   }
  }
};

class GameModeB:public GameRules{
Dice d1;
Dice d2;

public:
  GameModeB(Player a,Player b):GameRules(a,b){
  }
  void play(){
   p1.Turn(true);
   int n,n1;
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
    }
    n = d1.roll();
    n1 = d2.roll();
    if(n == 1 && n1 == 1){
     p1.Turn(false);
