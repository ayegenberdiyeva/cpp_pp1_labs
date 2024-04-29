#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for (int i= 0; i<n; i++){
        cin >> a[i];
    }

    vector<int> even, odd;

    for (int i = 0; i<n; i++){
        if(a[i]%2 == 0){
            even.push_back(a[i]);
        } else {
            odd.push_back(a[i]);
        }
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    vector<int>::iterator eit = even.end()-1, oit = odd.begin();

    while (eit != even.begin()-1){
        cout << *eit << " ";
        eit--;
    }

    while (oit != odd.end()){
        cout << *oit << " ";
        oit++;
    }


    return 0;
}