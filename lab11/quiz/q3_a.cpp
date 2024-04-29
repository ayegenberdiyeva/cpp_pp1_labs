#include <iostream>

using namespace std;

string isTruth(string word){
    bool wordistrue = true;
    for (int  j = 0; j<word.size(); j++){
        int k = (int) word[j];
        if (k >= 48 && k <= 57){
            wordistrue = false;
            break;
        }
    }
    if (wordistrue == true && word != ""){
        cout << word << endl;
    }
    return 0;
}

int main(){
    string sent, word = "";
    getline(cin, sent);
    bool oneword = true;

    for (int i = 0; i<sent.size(); i++){   
        if (sent[i] == ' '){
            isTruth(word);
            word = "";
            oneword = false;
        }
        else {
            word += sent[i];
        }
    }
    
    if (oneword == true){
        cout << sent << endl;
    }

    return 0;
}