#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void find_hypotenuse(int a, int b){
    long double c = sqrt (pow(a,2) + pow(b,2));
    cout << setprecision(4) << fixed;
    cout << c << endl;
    return;
}

int main(){
    int a, b;
    cin >> a >> b;

    find_hypotenuse(a, b);
    
    return 0;
}