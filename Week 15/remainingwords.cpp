#include <iostream>
using namespace std;

string remainingword(string line){
    string first = "";
    string answer = "";
    int end_of_first_word = 0;

    for (int i = 0; i < line.size(); i++) {
        if (line[i] == ' ')
            if (first.size() != 0){
                end_of_first_word = i;
                break;
            }
            else{
                continue;
            }
        else{
            first += line[i];
        }
    }

    for (int i = end_of_first_word + 1; i < line.size(); i++) {
        if (line[i] == ' ')
        /* If we see a space after the first word, then we check whether or not 
        we have already seen words that come after it. If we have already seen 
        words after the space (answer.size()!= 0), then we include the space as 
        part of the words that come after.
        */
            if (answer.size() != 0){
                answer += line[i];
            }
            else{   // If this is the first time we see a space, we ignore it
                continue;
            }
        else{
            answer += line[i];
        }
    }
    return answer;
}


int main(){
    string line;

    cout << remainingword("the    quick brown fox jumped over the lazy dog")<< "\n";
}
