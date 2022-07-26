#include <iostream>
using namespace std;

string firstword(string line){
    string answer = "";
    for (int i = 0; i < line.size(); i++) {
        if (line[i] == ' ')
            if (answer.size() != 0){
                break;
            } 
            else{
                continue;
            }
        
        else{
            answer += line[i];
        }
    }
    return answer;
}


int main(){
    int i;
    int length;
    string line;

    cout << firstword("the quick brown fox jumped over the lazy dog")<< "\n";
}
