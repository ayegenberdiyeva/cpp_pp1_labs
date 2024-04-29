#include <iostream>

using namespace std;

int main(){
    string ami;
    cin >> ami;
    int sumik = 0;

    for (int i = 0; i<ami.size(); i++){
        int numik = (int) ami[i];
        if (numik >= 48 && numik <= 57){
            sumik += numik-48;
        }
    }

    cout << sumik << endl;

    return  0;
}