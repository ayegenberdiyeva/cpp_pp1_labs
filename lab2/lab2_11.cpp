#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int N, p = 2;
    cin >> N;

    for( int i = 1; pow(i,p) <= N; i++ ){
        cout << pow(i,p) << endl;
    }
    return 0;
}