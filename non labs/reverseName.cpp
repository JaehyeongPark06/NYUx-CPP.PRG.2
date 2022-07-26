#include <iostream>
using namespace std;

int main(){
    string name;
    int ind;

    cout << "Please enter a name:" << endl;
    getline(cin, name);

    for (ind = name.length() - 1; ind >= 0; ind--) {
        cout << name[ind];
    }
    cout<<endl;
    return 0;
}