#include <iostream>
#include <bitset>
#include <cmath>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    
    long long bin = ( a & b );
    
    cout << bin << endl;

    return 0;
}

