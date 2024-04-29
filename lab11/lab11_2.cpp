#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, num;
    cin >> n;

    vector<int> list;
    for (int i = 0; i<n; i++){
        cin >> num;
        list.insert(num);
    }

    if (list.size() == n){
        cout << "YES"<< endl;
    } else {
        cout << "NO"<< endl;
    }

    return 0;
}