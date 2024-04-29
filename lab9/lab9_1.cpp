#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    int n, x, y;
    cin >> n;

    map<int, int> plane;

    for (int i = 0; i<n; i++){
        cin >> x >> y;
        plane.insert(pair<int, int>(x, y));
    }

    for (int i = 0; i<n; i++){

    }
 
    return 0;
}