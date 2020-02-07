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
