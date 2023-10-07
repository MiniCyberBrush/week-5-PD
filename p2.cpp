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