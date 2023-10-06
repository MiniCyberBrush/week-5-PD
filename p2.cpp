#include<iostream>
using namespace std;
void taxcalculator(char code, int price);
main(){
char code; int price;
cout << "Enter the vehicle type code (M, E, S, V, T): ";
cin >> code;
cout << "Enter the price of vehicle: $";
cin >> price;
taxcalculator( code, price);

}

void taxcalculator(char code, int price)
{
if (code == 'M')
{
float Tax_amount = price*(0.06);
float final_price = price + Tax_amount;
cout << "The final price of a vehicle of type " << code << " after adding the tax is $" << final_price;
}
if (code == 'E')
{
float Tax_amount = price*(0.08);
float final_price = price + Tax_amount;
cout << "The final price of a vehicle of type " << code << " after adding the tax is $" << final_price;
}
if (code == 'S')
{
float Tax_amount = price*(0.1);
float final_price = price + Tax_amount;
cout << "The final price of a vehicle of type " << code <<" after adding the tax is $" << final_price;
}

if (code == 'V')
{
float Tax_amount = price*(0.12);
float final_price = price + Tax_amount;
cout << "The final price of a vehicle of type " << code << " after adding the tax is $" << final_price;
}
if (code == 'T')
{
float Tax_amount = price*(0.15);
float final_price = price + Tax_amount;
cout << "The final price of a vehicle of type " << code << " after adding the tax is $" << final_price;
}
}