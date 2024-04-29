#include <iostream>

using namespace std;

int main(){
    string num;
    int evend = 0;
    cin >> num;

    for (int i = 0; i<num.size(); i++){
        int k = (int) num[i] - 48;
        if (k%2 == 0){
            evend++;
        }
    }

    cout << evend << endl;

    return 0;
}