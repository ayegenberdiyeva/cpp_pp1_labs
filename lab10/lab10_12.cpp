#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, a = 0;
    cin >> n;
    int size = n*(n+1)/2;

    vector<int> list(size);

    for (int i = 1; i<size; i++){
        fill(list.begin()+a, list.begin()+a+i, i);
        a += i;
    }

    for (int i = 0; i<size; i++){
        cout << list[i] << " ";
    }

    return 0;
}