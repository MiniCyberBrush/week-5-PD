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














