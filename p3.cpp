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