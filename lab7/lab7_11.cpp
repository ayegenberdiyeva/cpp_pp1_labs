#include <iostream>

using namespace std;

int maxd(string s){
    int max = -1;
    for(int i = 0; i<s.size(); i++){
        int k = (int) s[i] - 48;
        if(k>max){
            max = k;
        }
    }

    return max;
}

int main(){
    string n;
    cin >> n;

    cout << maxd(n);

    return 0;
}