#include <iostream>
using namespace std;

double bmimetricf(int weight, float height){

  cin >> weight;
  cin >> height;

  int BMI = weight/(height*height);
  
  return BMI;
}

int main(){
  int weight;
  float height;
  
  printf("BMI is: %3.2f", bmimetricf(weight, height));
}