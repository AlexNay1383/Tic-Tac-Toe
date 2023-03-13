#ifndef TICTACTOE
#define TICTACTOE

#include <iostream>
using namespace std;


enum eGameOver {NOTHING = 0, DRAW, FIRST, SECOND};
eGameOver gameOver;
char spot[9];
int input;
bool turn;


void SetUp();

void Draw();
void Input();
void Logic();

void EndS();


#endif
