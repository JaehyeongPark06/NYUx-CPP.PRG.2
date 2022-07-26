#include <iostream>
using namespace std;

int isleapyear(int year){;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << year << " is a leap year.";
  }
    else {
        cout << year << " is not a leap year.";
  }

  return 0;
}

int main() {
    int year;
    cin>>year;

    if(isleapyear(year))
        printf("Year %i was a leap year",year);

    return 0;
}