#include <iostream>

using namespace std;

int sum = 0;
void sum_of_digits(string s, int i){
    if (s.size()==i){
        cout << sum << endl;
        return;
    }
    sum += s[i]-48;

    sum_of_digits(s, ++i);
}

int main(){
    string num;
    cin >> num;

    sum_of_digits(num, 0);

    return 0;
}