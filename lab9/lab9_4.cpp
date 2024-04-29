#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, k, num, count = 0;
    cin >> n >> k;

    vector<int> list;
    for (int i = 0; i<n; i++){
        cin >> num;
        list.push_back(num);
        if (list[i] == k){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}