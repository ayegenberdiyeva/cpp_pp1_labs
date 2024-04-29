#include <iostream>
#include <vector>

using namespace std;

int lcm(int a, int b){
    int bigger;
    if (a>b){
        bigger = a;
    } else {
        bigger = b;
    }

    for (int i = bigger; i<= a*b; i++){
        if (i%a == 0 && i%b == 0){
            return i;
        }
    }
}

int main(){
    int a, b, k;
    cin >> a >> b >> k;

    

    return 0;
}