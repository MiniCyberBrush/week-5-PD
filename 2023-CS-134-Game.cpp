#include <iostream>
#include <windows.h>
using namespace std;
void print_maze();
void gotoxy(int xPlayer, int yPlayer);
void print_player_1();
void move_player1_right();
void erase_player_1();
char getCharAtxy(short int x, short int y);
void printEnemy();
void eraseEnemy();
void moveEnemy();
void move_player1_left();
void erase_player_2();
void print_player_2();
void move_player2_left();
void move_player2_right();
int x1 = 30, y1 = 7, x2 = 20, y2 = 15, x3 = 10, y3 = 7, x4 = 85, y4 = 7, x5 = 75, y5 = 15, x6 = 65, y6 = 7;
int xPlayer = 3, yPlayer = 28;
int prevXPlayer = 0, prevYPlayer = 0;
int xPlayer2 = 58 , yPlayer2 = 28;
int prevXPlayer2 = 0, prevYPlayer2 = 0;
main()
{
  // This program must be done using pass by reference because one must try to avoid global variables
  print_maze();
  printEnemy();
  print_player_1();
  print_player_2();
    while (true)
  {
    moveEnemy();
    Sleep(100);

    if (GetAsyncKeyState(VK_RIGHT))
    {
      move_player1_right();
    }
    if (GetAsyncKeyState(VK_LEFT))
    {
      move_player1_left();
    }

   if (GetAsyncKeyState(VK_UP))    {
      move_player2_right();
    }
    if (GetAsyncKeyState(VK_DOWN))
    {
      move_player2_left();
    }

  }
}

void print_maze()
{
  cout << "##################################################################################################################" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "#                                                     #                                                          #" << endl;
  cout << "##################################################################################################################";
}
void gotoxy(int x, int y)
{

  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void eraseEnemy()
{

  gotoxy(x1, y1);
  cout << "         ";
  gotoxy(x2, y2);
  cout << "         ";
  gotoxy(x3, y3);
  cout << "         ";
  gotoxy(x4, y4);
  cout << "         ";
  gotoxy(x5, y5);
  cout << "         ";
  gotoxy(x6, y6);
  cout << "         ";
}

void moveEnemy()
{
  eraseEnemy();
  y1 = y1 + 1;
  if (y1 == 15)
    y1 = 7;

  y2 = y2 - 1;
  if (y2 == 7)
    y2 = 15;

  y3 = y3 + 1;
  if (y3 == 15)
    y3 = 7;

  y4 = y4 + 1;
  if (y4 == 15)
    y4 = 7;

  y5 = y5 - 1;
  if (y5 == 7)
    y5 = 15;

  y6 = y6 + 1;
  if (y6 == 15)
    y6 = 7;
  printEnemy();
}

void printEnemy()
{
  gotoxy(x1, y1);
  cout << "o(> = <)o";
  gotoxy(x2, y2);
  cout << "o(> = <)o";
  gotoxy(x3, y3);
  cout << "o(> = <)o";
  gotoxy(x4, y4);
  cout << "o(> = <)o";
  gotoxy(x5, y5);
  cout << "o(> = <)o";
  gotoxy(x6, y6);
  cout << "o(> = <)o";
}

void print_player_1()
{
  prevXPlayer = xPlayer;
  prevYPlayer = yPlayer;
  gotoxy(xPlayer, yPlayer);
  cout << "^___^";
  
  gotoxy(xPlayer, yPlayer + 1);
  cout << "(   )";
   
  gotoxy(xPlayer, yPlayer + 2);
  cout << "/   \\";
}

void move_player1_right()
{
  if (getCharAtxy(xPlayer + 6, yPlayer) == ' ')
  {
    erase_player_1();
    xPlayer = xPlayer + 1;
    print_player_1();
  }
}



void move_player1_left()
{
  if (getCharAtxy(xPlayer - 1, yPlayer) == ' ')
  {
    erase_player_1();
    xPlayer = xPlayer - 1;
    print_player_1();
  }
}




void move_player2_right()
{
  if (getCharAtxy(xPlayer2 + 6, yPlayer2) == ' ')
  {
    erase_player_2();
    xPlayer2 = xPlayer2 + 1;
    print_player_2();
  }
}




void move_player2_left()
{
  if (getCharAtxy(xPlayer2 - 1, yPlayer2) == ' ')
  {
    erase_player_2();
    xPlayer2 = xPlayer2 - 1;
    print_player_2();
  }
}



void erase_player_1()
{

  gotoxy(prevXPlayer, prevYPlayer);
  cout << "     ";
  
  gotoxy(prevXPlayer, prevYPlayer + 1);
  cout << "     ";
  
  gotoxy(prevXPlayer, prevYPlayer + 2);
  cout << "     ";
}

char getCharAtxy(short int x, short int y)
{
  CHAR_INFO ci;
  COORD xy = {0, 0};
  SMALL_RECT rect = {x, y, x, y};
  COORD coordBufSize;
  coordBufSize.X = 1;
  coordBufSize.Y = 1;
  return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
                                                                                          : ' ';
}






void print_player_2()
{
  prevXPlayer2 = xPlayer2;
  prevYPlayer2 = yPlayer2;
  gotoxy(xPlayer2, yPlayer2);
  cout << "^___^";
  
  gotoxy(xPlayer2, yPlayer2 + 1);
  cout << "(   )";
   
  gotoxy(xPlayer2, yPlayer2 + 2);
  cout << "/   \\";
}





void erase_player_2()
{

  gotoxy(prevXPlayer2, prevYPlayer2);
  cout << "     ";
  
  gotoxy(prevXPlayer2, prevYPlayer2 + 1);
  cout << "     ";
  
  gotoxy(prevXPlayer2, prevYPlayer2 + 2);
  cout << "     ";
}