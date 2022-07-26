#include <iostream>
using namespace std;

int main(){
    string str;
    int i;

    cout << "Enter an odd length string" << endl;
    getline(cin, str);

    // middle character
    int length = str.size();
    int middle = length / 2;
 
    cout << "Middle character: " << str[middle] << endl;

    // first half of the string
    cout << "First half: ";
    for (i = 0; i < middle; i++){
        cout << str[i];
    }
    cout << endl;

    // second half of the string
    cout << "Second half: ";
    for (i = middle + 1; length > i && i > middle; i++){
        cout << str[i];
    }
    cout << endl;
    return 0;
}