#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, l, r;
    cin >> n >> l >> r;

    vector<int> list;
    int num;

    for (int i = 0; i<n; i++){
        cin >> num;
        list.push_back(num);
    }

    reverse(list.begin()+l-1, list.begin()+r);

    vector<int>::iterator it = list.begin();

    while (it != list.end()){
        cout << *it << " ";
        it++;
    }

    return 0;
}