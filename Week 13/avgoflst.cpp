#include <iostream>
using namespace std;

float avgoflst(int lst[], int size){
    int i;
    int avg;
    int sum = 0;

    for (i = 0; i < size; i++) {
        sum += lst[i];
    }
    avg = (double)sum / (double)size;
    return avg;
}

int main() {
    int lst[] = {19, 2, 20, 1, 0, 18};
    int size = sizeof(lst) / sizeof(lst[0]);    
    printf("%3.0f", avgoflst(lst,6));
}