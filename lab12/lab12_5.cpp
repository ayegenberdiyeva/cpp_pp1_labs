#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s;

    while (n>0){
        if (n%16 <= 9){
            if (n%16 == 1){
                s.push_back("1");
            }
            if (n%16 == 2){
                s.push_back("2");
            }
            if (n%16 == 3){
                s.push_back("3");
            }
            if (n%16 == 4){
                s.push_back("4");
            }
            if (n%16 == 5){
                s.push_back("5");
            }
            if (n%16 == 6){
                s.push_back("6");
            }
            if (n%16 == 7){
                s.push_back("7");
            }
            if (n%16 == 8){
                s.push_back("8");
            }
            if (n%16 == 9){
                s.push_back("9");
            }
            if (n%16 == 0){
                s.push_back("0");
            }
        } else {
            if (n%16 == 10){
                s.push_back("A");
            }
            if (n%16 == 11){
                s.push_back("B");
            }
            if (n%16 == 12){
                s.push_back("C");
            }
            if (n%16 == 13){
                s.push_back("D");
            }
            if (n%16 == 14){
                s.push_back("E");
            }
            if (n%16 == 15){
                s.push_back("F");
            }
        }
        n/=16;
    }

    reverse(s.begin(), s.end());

    vector<string>::iterator it = s.begin();

    while (it != s.end()){
        cout << *it;
        it++;
    }

    return 0;
}