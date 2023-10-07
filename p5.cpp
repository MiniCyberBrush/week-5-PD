#include<iostream>
#include<windows.h>


using namespace std;
void print_maze();
void gotoxy(int x , int y );
void print_enemy(int x1 , int y1 , int x2,int y2,int x3, int y3, int x4,int y4 , int x5, int y5,int x6 , int y6);


main(){
int x1 = 30, y1 = 7 , x2 = 21 , y2 = 15 , x3 = 11 , y3 = 7 , x4 = 85, y4 = 7 , x5 = 76 , y5 = 15 , x6 = 67 , y6 = 7;
print_maze();
print_enemy(x1 , y1 , x2,y2, x3,  y3,  x4,  y4 , x5, y5, x6 , y6);




}

void print_maze()
{
cout << "##################################################################################################################"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "#                                                     #                                                          #"<<endl;
cout << "##################################################################################################################";



}
void gotoxy(int x , int y )
{

COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}
void print_enemy(int x1 , int y1 , int x2,int y2,int x3, int y3, int x4,int y4 , int x5, int y5,int x6 , int y6)
{
  while(1){
  gotoxy(x1,y1);
  cout << "o(> = <)o";
  gotoxy(x2,y2);
  cout << "o(> = <)o";
  gotoxy(x3,y3);
  cout << "o(> = <)o";
  gotoxy(x4,y4);
  cout << "o(> = <)o";
  gotoxy(x5,y5);
  cout << "o(> = <)o";
  gotoxy(x6,y6);
  cout << "o(> = <)o";
Sleep(100);
  gotoxy(x1,y1);
  cout << "         ";
  gotoxy(x2,y2);
  cout << "         ";
  gotoxy(x3,y3);
  cout << "         ";
  gotoxy(x4,y4);
  cout << "         ";
  gotoxy(x5,y5);
  cout << "         ";
  gotoxy(x6,y6);
  cout << "         ";

y1 = y1 + 1;
if (y1==15)
y1 = 7;

y2 = y2 - 1;
if (y2 == 7)
y2 = 15;

y3 = y3 + 1;
if (y3==15)
y3 = 7;

y4 = y4 + 1;
if (y4==15)
y4 = 7;

y5 = y5 - 1;
if (y5 == 7)
y5 = 15;

y5 = y5 + 1;
if (y5==15)
y5 = 7;





  }
  
}
