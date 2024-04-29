#include <iostream>
#include <cmath>

using namespace std;

void Max_Val(int ar[4]){
    int max = - pow(10, 5);
    for (int i = 0; i<4; i++){
        if ( ar[i] > max){
            max = ar[i];
        }
    }

    cout << max << endl;
}

int main(){
    int ar[4];
    for (int i = 0; i<4; i++){
        cin >> ar[i];
    }

    Max_Val(ar);

    return 0;
}