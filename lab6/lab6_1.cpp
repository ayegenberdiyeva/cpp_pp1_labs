#include <iostream>

using namespace std;

void Sum_of_Integers(int a, int b, int sum){
    sum = a + b;
    cout << sum << endl;
}

int main(){
    int a, b, sum;
    cin >> a >> b;
    Sum_of_Integers(a, b, sum);
}
