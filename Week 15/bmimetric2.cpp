#include <iostream>
using namespace std;

double bmimetricf(int weight, float height){
    
    cout << "BMI  |" << "  Weight Status" << endl;
    cout << "--------------------------------" << endl;
    cout << "Below 18.5  |" << "  Underweight" << endl;
    cout << "18.5-24.9  |" << "  Normal" << endl;    
    cout << "25.0-29.9  |" << "  Overweight" << endl;
    cout << "30.0 and above  |" << "  Obese" << endl;

    cout << "Please enter weight in kilograms: ";
    cin >> weight;
    
    cout << "Please enter height in meters: ";
    cin >> height;

    float BMI = weight/(height*height);
  
    return BMI;
}


int main(){
    int weight;
    float height;
    string stat;
    int BMI;

    if (BMI < 18.5) {
        stat = "Underweight";
    }
    else if (18.5 < BMI < 24.9) {
        stat = "Normal";
    }
    else if (25 < BMI < 29.9) {
        stat = "Overweight";
    }
    else;
        stat = "Obese";


    printf("BMI is: %3.2f", bmimetricf(weight, height));
    cout << ", Status is " << stat <<endl;

}