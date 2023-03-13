#include "tictactoe_f.h"

void Draw()
{
    system("cls");
    cout<<"       TicTacToe\n\n";
    cout<<"       |       |\n";
    cout<<"   "<<spot[0]<<"   |   "<<spot[1]<<"   |   "<<spot[2]<<"\n";
    cout<<"       |       |\n";
    cout<<"-------|-------|-------\n";
    cout<<"       |       |\n";
    cout<<"   "<<spot[3]<<"   |   "<<spot[4]<<"   |   "<<spot[5]<<"\n";
    cout<<"       |       |\n";
    cout<<"-------|-------|-------\n";
    cout<<"       |       |       \n";
    cout<<"   "<<spot[6]<<"   |   "<<spot[7]<<"   |   "<<spot[8]<<"\n";
    cout<<"       |       |\n";
    cout<<"       |       |\n";

}



void SetUp()
{
    gameOver = NOTHING;
    turn = true;
    for(int i=0;i<9;i++)
    {
        spot[i]=i+49;
    }
}



void Input()
{
    if(turn==true)
    {
        cout<<"Player 1, which spot do you want to take?\n";
        cin>>input;
        while(spot[input-1]=='X' or spot[input-1]=='O' or input>9 or input<1)
        {
            cin>>input;
        }
        spot[input-1]='X';
        turn=false;
    }
    else
    {
        cout<<"Player 2, which spot do you want to take?\n";
        cin>>input;
        while(spot[input-1]=='X' or spot[input-1]=='O' or input>9 or input<1)
        {
            cin>>input;
        }
        spot[input-1]='O';
        turn=true;
    }
}



void Logic()
{
    int one = 0, two = 1, three = 2;
    bool check_draw = true;

    for(int i=0;i<9;i++)
    {
        if(spot[i]==i+49) check_draw = false;
    }
    if(check_draw == true)
    {
        gameOver = DRAW;
    }

    for(int i=0;i<8;i++)
    {
        if(spot[one] == spot[two] and spot[two] == spot[three])
        {
            if(spot[one]=='X') gameOver = FIRST;
            else gameOver = SECOND;
        }
        if(i==0 or i==1)
        {
            one+=3;
            two+=3;
            three+=3;
        }
        if(i==2)
        {
            one=0;
            two=3;
            three=6;
        }
        if(i==3 or i==4)
        {
            one++;
            two++;
            three++;
        }
        if(i==5)
        {
            one=0;
            two=4;
            three=8;
        }
        if(i==6)
        {
            one=2;
            two=4;
            three=6;
        }
    }
}



void EndS()
{
    if(gameOver==FIRST) cout<<"Player 1 won!\n";
    else if(gameOver==SECOND) cout<<"Player 2 won!\n";
    else cout<<"Player 1 and 2 drew!\n";
}
