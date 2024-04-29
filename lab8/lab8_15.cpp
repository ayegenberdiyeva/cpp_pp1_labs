#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    string word;
    cin >> word;
    set<char> str;
    
    for (int i = 0; i<word.size(); i++){
        if (isupper(word[i])>0){
            word[i] = tolower(word[i]);
        }
        str.insert(word[i]);
    } 

    cout << str.size() << endl;

    set<char>::iterator it = str.begin();

    while (it!=str.end()){
        cout << *it << " ";
        it++;
    }

    return 0;
}