#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

long long gen(){
    static long long i = 0;
    long long p = pow(i,i);
    i++;
    return p;
}

int main(){
    int n;
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