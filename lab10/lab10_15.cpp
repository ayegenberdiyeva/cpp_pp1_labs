#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binary(int n){
    if (n == 0){
        return;
    }

    binary(n/2);

    cout << n%2;
}

int main(){
    int n, num;
    cin >> n;

    vector<int> list;
    for (int i = 0; i<n; i++){
        cin >> num; 
        list.push_back(num);
    }

    for (auto x : list){
        binary(x);
        cout << endl;
    }

    return 0;
}