#include <iostream>
using namespace std;

int main(){
    string day;
    int time;
    int length = 0;
    float cost;
    float total;

    cout << "Enter the day the call started at: " << day << endl;
    cin >> day;
    if (day  == "Sat" or day == "Sun"){
        cost = 0.15;
    }
    else{
        cout << "Enter the time the call started at (hhmm): " << endl;
        cin >> time;
        if (800 <= time && time <= 1800){
            cost = 0.4;
        }
        else if (time < 800 or time > 1800){
            cost = 0.25;
        }
        }
    cout << "Enter the duration of the call (in minutes): " << endl;
    cin >> length;

    total = length * cost;

    printf("This call will cost %2.2f\n", total);
    }
