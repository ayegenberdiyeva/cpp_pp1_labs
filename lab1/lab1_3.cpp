/* #include <iostream>
using namespace std;

void DecToBinary(int n){
    int binnum[32];
    int i;
    while(n > 0){
        binnum[i] = n % 2;
        n = n / 2;
        i++;
    }
} // from decimal to binary wout reversing

int BinToDecimal(int n){
    int binnum = n;
    int decnum = 0;
    int base = 1;
    int temp = binnum;
    
    while(temp){
        int lastd = temp %10;
        temp = temp / 10;

        decnum += lastd * base;
        base = base * 2;
    }
    return decnum;
} // from binary to decimal 

int main(){
    int n;
    cin >> n;
    
    cout << BinToDecimal(n)<< endl;
    return 0;
} */

#include <iostream>

using namespace std;

int main(){
    int num1;
    cin >> num1;
    int a = num1 % 2;
    num1 /= 2;
    int b = num1 % 2;
    num1 /= 2;
    int c = num1 % 2;
    num1 /= 2;
    int d = num1 % 2;
    int num2 = a*8 + b*4 + c*2 + d;
    cout << num2;
    return 0;
}