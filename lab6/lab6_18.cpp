#include <iostream>

using namespace std;

int uppercase_letter(string letter){
    int k = (int) letter[0];
    if (k >= 97){
        k -= 32;
        letter[0] = (char) k;
    }

    cout << letter[0] << endl;

    return 0;
}

int main(){
    string letter;
    cin >> letter;

    uppercase_letter(letter);
    return 0;
}