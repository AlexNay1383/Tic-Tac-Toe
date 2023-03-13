#include "tictactoe_f.h"
#include "tictactoe_f.cpp"

int main()
{
    SetUp();
    while(gameOver==NOTHING)
    {
        Draw();
        Input();
        Logic();
    }
    Draw();
    EndS();
    return 0;
}
