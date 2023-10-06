#include<iostream>
#include<math.h>
using namespace std;
void ProjectTimeCalculation(float hours, float days, int workers );
main(){
int hours, days,workers;
cout <<"Enter the neede hours: ";
cin >> hours;
cout << "Enter the days that the firm has: ";     
cin >> days;
cout << "Enter the number of all workers: ";
cin >> workers;
ProjectTimeCalculation(hours,days, workers );
}







void ProjectTimeCalculation(float hours, float days, int workers )
{
int time = 9*days*workers;
int time_needed = time-hours;
if (time_needed < 0 )
cout << "Not enough time! " << abs(time_needed) << " hours needed.";
else if (time_needed > 0)
cout << "Yes! " << time_needed << " hours left.";


}