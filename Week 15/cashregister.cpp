#include <iostream>
using namespace std;

int main() {
    float p1;
    float p2;
    string card;
    float tax;
    float basep;
    float discp = 0;
    float total;

    cout << "Enter price of the first item: ";
    cin >> p1;
    cout << "Enter price of the second item: ";
    cin >> p2;
    basep = p1 + p2;

    if (p1 >= p2) {
        discp = p1 + (p2/2);
    }
    else {
        discp = (p1/2) + p2;
    }

    cout << "Does customer have a club card? (Y/N): " <<endl;
    cin >> card;
    if (card == "y" or card == "Y"){
        discp *= 0.9;
    }
    else {
        discp = discp;
    }

    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: " << endl;
    cin >> tax;
    tax = tax/100; 
    total = (discp * (1 + tax));

    printf("Base Price = %2.2f\n", basep);
    printf("Price after discounts = %2.2f\n", discp);
    printf("Total Price = %2.2f\n", total);
}
