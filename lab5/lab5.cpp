#include <iostream>
#include <string>

using namespace std;

int main(){
    string num;
    int sum_odd = 0, sum_even = 0;
    cin >> num;

    for ( int i = 0; i < num.size(); i+=2 ){
        int k = (int) num[i] - 48;
        sum_odd += k;
    }

    for ( int i = 1; i < num.size(); i+=2 ){
        int k = (int) num[i] - 48;
        sum_even += k;
    }

    if ( sum_even == sum_odd){
        cout << "YES" << endl;
    } 
    else 
        cout << "NO" << endl;

    return 0;
}