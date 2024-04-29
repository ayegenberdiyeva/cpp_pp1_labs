#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, count;
    cin >> n;

    vector<int> numbers;

    for (int i = 0; i<n; i++){
        cin >> count;
        numbers.push_back(count);
    }

    sort(numbers.begin(), numbers.end());

    vector<int>::iterator it;
    for (it = numbers.begin(); it != numbers.end(); it++){
        cout << *it << " ";
    }

    return 0;
}
