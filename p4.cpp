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