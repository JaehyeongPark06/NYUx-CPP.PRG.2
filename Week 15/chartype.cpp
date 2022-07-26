#include <iostream>
using namespace std;

int main() {
    string character;

    cout << "Enter a character: " << endl;
    getline(cin, character);

    if (character[0] >= 'A' && character[0] <= 'Z')
        cout<< character << " is an upper case letter.\n";
 
    else if (character[0] >= 'a' && character[0] <= 'z')
        cout<< character << " is a lower case letter.\n";
    
    else if (character[0] >= '0' && character[0] <= '9')
        cout << character << " is a digit.\n"; 
      
    else
        cout<< character << " is a non-alphanumeric character.\n";
}