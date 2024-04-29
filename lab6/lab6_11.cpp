#include <iostream>
#include <cmath>

using namespace std;

void Sum_of_Values(string num){
    int sum = 0;
    for (int i = 0; i<num.size(); i++){
        int k = ((int)num[i]) - 48;
        sum += k;
    }

    cout << sum << endl;
}

int main(){
    string num;
    cin >> num;

    Sum_of_Values(num);

    return 0;
}