#include<iostream>
using namespace std;
int value1 = 10;
int value2 = 20;
int sum();

main(){
 int x = value1;
value1 = 100;
x = 20;
value2 = sum();
cout <<value1 << " " << value2;


}
int sum(){

value1 = 40;
return value1 + value2;


}







#include<iostream>
using namespace std;
float taxcalculator(char code, int price ,float final_price);
main(){
char code; int price;
cout << "Enter the vehicle type code (M, E, S, V, T): ";
cin >> code;
cout << "Enter the price of vehicle: $";
cin >> price;

float final_price = taxcalculator( code, price,final_price);
cout << "The final price of a vehicle of type " << code << " after adding the tax is $" << final_price;

}

float taxcalculator(char code, int price, float final_price)

{
    
if (code == 'M')
{
float Tax_amount = price*(0.06);
final_price = price + Tax_amount;

}
if (code == 'E')
{
float Tax_amount = price*(0.08);
 final_price = price + Tax_amount;

}
if (code == 'S')
{
float Tax_amount = price*(0.1);
final_price = price + Tax_amount;

}

if (code == 'V')
{
float Tax_amount = price*(0.12);
 final_price = price + Tax_amount;

}
if (code == 'T')
{
float Tax_amount = price*(0.15);
final_price = price + Tax_amount;

}
return final_price;
}














#include<iostream>
#include<math.h>
using namespace std;
int ProjectTimeCalculation(float hours, float days, int workers );
main(){
int hours, days,workers;
cout <<"Enter the neede hours: ";
cin >> hours;
cout << "Enter the days that the firm has: ";     
cin >> days;
cout << "Enter the number of all workers: ";
cin >> workers;
int time = ProjectTimeCalculation(hours,days, workers );
if (time < 0 )
cout << "Not enough time! " << abs(time) << " hours needed.";
else if (time > 0)
cout << "Yes! " << time << " hours left.";
}







int ProjectTimeCalculation(float hours, float days, int workers )
{
int time = 9*days*workers;
int time_needed = time-hours;
return time_needed;


}

















#include<iostream>
using namespace std;
float pyramid_volume(float length , float width , float height, string unit, float volume);
main(){
float length,width,height;
string unit;
cout << "Enter the length of pyramid (in meter): ";
cin >> length;
cout << "Enter the width of pyramid (in meter): ";
cin >> width;
cout << "Enter the height of pyramid (in meter): ";
cin >> height;
cout << "Enter the desired output unit (milimeters, centimeters, meters, kilometers): ";
cin >> unit;
float volume = pyramid_volume(length ,width ,height,unit,volume);
cout << "The volume of the pyramid is: " << volume << " cubic " << unit ;



}

float pyramid_volume(float length , float width , float height, string unit , float volume)
{
  
  if (unit == "milimeters")
  {
    volume = ((length * width * height)/3)*1000000000;
  }
  if (unit == "centimeters")
  {
    volume = ((length * width * height)/3)*1000000;
  }
if (unit == "meters")
  {
    volume = ((length * width * height)/3);
  }
  if (unit == "kilometers")
  {
    volume = ((length * width * height)/3)/1000;
  }
 return volume;

}


























#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
void print_header();
void option(int op, int movie , int location, int time);
void option2(int op, int movie , int location, int time);
void option3(int op, int movie , int location, int time);
void printTicket(int movie, int location,int time);
main(){
print_header();
int  movie, location, time ;
int optionn;
cout <<"\n";
cout <<"\n";
cout <<"\n";
cout << "1. Pick a Location"<<endl;
cout <<"\n";
cout <<"\n";
cout <<"\n";
cout << "2. Pick a Movie"<<endl;
cout <<"\n";
cout <<"\n";
cout <<"\n";
cout << "3. Pick a Time"<<endl;
cout <<"\n";
cout <<"\n";
cout <<"\n";

cout <<"Enter a number to choose an option(1, 2, 3): ";
cin >> optionn;
option(optionn, movie , location,time);
option2(optionn,movie ,location,time);
option3(optionn,movie ,location,time);
 system("cls");
cout << "Booking Confirmed";




 }

void print_header()
 {

cout<<"###########################################################################################################################################"<<endl;
cout<<"#                                             _____ _           ______                                                                    #       "<<endl;
cout<<R"(#                                            /  __ (_)          | ___ \                                                                   #       )"<<endl;
cout<<R"(#                                            | /  \/_ _ __   ___| |_/ /___  ___  ___ _ ____   _____                                       #       )"<<endl;
cout<<R"(#                                            | |   | | '_ \ / _ \    // _ \/ __|/ _ \ '__\ \ / / _ \                                      #       )"<<endl;
cout<<R"(#                                            | \__/\ | | | |  __/ |\ \  __/\__ \  __/ |   \ V /  __/                                      #       )"<<endl;
cout<<R"(#                                             \____/_|_| |_|\___\_| \_\___||___/\___|_|    \_/ \___|                                      #       )"<<endl;
cout<<"###########################################################################################################################################"<<endl;
}



void option(int op, int movie , int location, int time)
{
  if (op == 1)
  {
    cout << "You have chosen option 1."<<endl;
    cout << "Press any key to proceed"<<endl;
    getch();
    system("cls");
    cout << "Choose a location: (1, 2, 3)"<<endl;
    cout <<"1. CinemaX"<<endl;
    cout <<"2. CinemaY"<<endl;
    cout <<"3. CinemaZ"<<endl;
    cout << "\n\nLocation: ";
 cin >> location;
  if (location  == 1)  
     {
      system("cls");
       cout << "pick a movie"<<endl;
       cout << "1. TheDarkKnight"<<endl;
       cout << "2. Titanic"<<endl;
       cout << "3. TheGodfather(1972)"<<endl; 
       cout << "\n\nMovie (1, 2, 3): ";
       cin >> movie;
        system("cls");
    cout << "Pick a time"<<endl;
    cout << "1. 6 PM"<<endl;
    cout << "\n\nTime: ";
    cin >> time;
     }
     if (location  == 2) 
      
     {
      system("cls");
       cout << "pick a movie"<<endl;
       cout <<"4. Parasite"<<endl; 
       cout << "5. TrainToBusan"<<endl;
      
       cout << "\n\nMovie (4, 5): ";
       cin >> movie;
        system("cls");
    cout << "Pick a time"<<endl;
    cout << "2. 8 PM"<<endl;
    cout << "\n\nTime: ";
    cin >> time;
     }
         if (location  == 3)  
     {
      system("cls");
       cout << "pick a movie"<<endl;
       
       cout <<"6. PrideAndprejudice"<<endl; 
       cout << "7. MaulaJatt"<<endl;
        cout << "8. Avatar"<<endl;
       cout << "\n\nMovie (6, 7, 8): ";
       cin >> movie;
           system("cls");
    cout << "Pick a time"<<endl;
    cout << "2. 8 PM"<<endl;
    cout << "\n\nTime: ";
    cin >> time;
     }


  }
}





void option2(int op, int movie , int location, int time)
{
if (op == 2)
  {
    cout << "You have chosen option 2."<<endl;
    cout << "Press any key to proceed"<<endl;
    getch();
    system("cls");
    cout << "pick a movie "<<endl;
    cout << "1. TheDarkKnight"<<endl;
    cout << "2. Titanic"<<endl;
    cout << "3. TheGodfather(1972)"<<endl;
    cout << "4. Parasite"<<endl;
    cout << "5. TrainToBusan"<<endl;
    cout << "6. PrideAndprejudice"<<endl;
    cout << "7. MaulaJatt"<<endl;
    cout << "8. Avatar"<<endl;
    cout << "\n\nMovie: ";
    cin >> movie;
    
    if (movie == 1 ||  movie == 2 || movie == 3)
    {
      system("cls");
      cout << "Pick a Location"<<endl;
      cout << "1. CinemaX"<<endl;
      cout << "\n\nLocation number : ";
      cin >> location;
       system("cls");
    cout << "Pick a time"<<endl;
    cout << "1. 6 PM"<<endl;
    cout << "2. 8 PM"<<endl;
    cout << "\n\nTime: ";
    cin >> time;
    }

    if (movie == 4 || movie ==  5)
    {
      system("cls");
      cout << "Pick a Location"<<endl;
      cout << "2. CinemaY"<<endl;
      cout << "\n\nLocation number: ";
      cin >> location;
       system("cls");
    cout << "Pick a time"<<endl;
    cout << "1. 6 PM"<<endl;
    cout << "2. 8 PM"<<endl;
    cout << "\n\nTime: ";
    cin >> time;
    }

     if (movie == 6 || movie ==  7 || movie == 8)
    {
      system("cls");
      cout << "Pick a Location"<<endl;
      cout << "3. CinemaZ"<<endl;
      cout << "\n\nLocation number: ";
      cin >> location;
       system("cls");
    cout << "Pick a time"<<endl;
    cout << "1. 6 PM"<<endl;
    cout << "2. 8 PM"<<endl;
    cout << "\n\nTime: ";
    cin >> time;
    
    }






  }
      

}





void option3(int op, int movie , int location, int time)

{
if (op == 3)
  {
    cout << "You have chosen option 3."<<endl;
    cout << "Press any key to proceed"<<endl;
    getch();
    system("cls");
    cout << "Pick a time"<<endl;
    cout << "1. 6 PM"<<endl;
    cout << "2. 8 PM"<<endl;
    cout << "\n\nTime: ";
    cin >> time;

    if (time == 1)
    {
     
    system("cls");
    cout << "pick a movie "<<endl;
    cout << "1. TheDarkKnight"<<endl;
    cout << "2. Titanic"<<endl;
    cout << "3. TheGodfather(1972)"<<endl;
    cout << "\n\nMovie: ";
    cin >> movie;
    
    if (movie == 1 ||  movie == 2 || movie == 3)
    {
      system("cls");
      cout << "Pick a Location"<<endl;
      cout << "1. CinemaX"<<endl;
      cout << "\n\nLocation number : ";
      cin >> location;
    }
    }
   if (time == 2)
   {
    system("cls");
    cout << "4. Parasite"<<endl;
    cout << "5. TrainToBusan"<<endl;
    cout << "6. PrideAndprejudice"<<endl;
    cout << "7. MaulaJatt"<<endl;
    cout << "8. Avatar"<<endl;
    cout << "\n\nMovie: ";
    cin >> movie;
     if (movie == 4 || movie ==  5)
    {
      system("cls");
      cout << "Pick a Location"<<endl;
      cout << "2. CinemaY"<<endl;
      cout << "\n\nLocation number: ";
      cin >> location;
    }

     if (movie == 6 || movie ==  7 || movie == 8)
    {
      system("cls");
      cout << "Pick a Location"<<endl;
      cout << "3. CinemaZ"<<endl;
      cout << "\n\nLocation number: ";
      cin >> location;
    }
    }
   }


  }














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