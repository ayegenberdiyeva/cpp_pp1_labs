#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long long gen(){
    static long long i = 0, k = 0, pow = 1;
    if (k == 0){
        i++;
        k = i;
        return pow;
    }
    pow *= i;
    k--;
    return gen();
}

int main(){
    long long n, pow = 1, k = 0, i = 0;
    cin >> n;

    vector<long long> list(++n);

    generate(list.begin(), list.end(), gen);

    vector<long long>::iterator it = list.begin();
    while (it != list.end()){
        cout << *it << " ";
        it++;
    }

    return 0;
}