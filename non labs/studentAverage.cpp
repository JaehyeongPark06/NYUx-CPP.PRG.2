#include <iostream>
using namespace std;

const int MAX_STUDENTS = 60;

int main(){
    int numOfstudents;
    int gradesList[MAX_STUDENTS];
    int currGrade;
    int ind, sum;
    double average;

    cout<<"Please enter the number of students in your class (no more than "<<MAX_STUDENTS<<")"
    <<endl;
    cin>>numOfstudents;

    // reading the grades
    for (ind = 0; ind < numOfstudents; ind++) {
        cin>>currGrade;
        gradesList[ind] = currGrade;
    }

    // calculating the average grade
    sum = 0;
    for (ind = 0; ind < numOfstudents; ind++) {
        sum += gradesList[ind];
    }
    average = (double)sum / (double)numOfstudents;
    cout<<"The class average is "<<average<<endl;

    // printing the grades above the class average
    cout<<"The grades above the class average are ";
    for (ind = 0; ind < numOfstudents; ind++) {
        if (gradesList[ind] > average) {
            cout<<gradesList[ind]<<" ";
        }
    cout<<endl;
}
}