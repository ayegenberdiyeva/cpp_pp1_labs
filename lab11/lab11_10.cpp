#include <iostream>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int a, b, n, a1, b1, l;
    cin >> a >> b >> n;

    map<int, vector<int> > points;

    for (int i = 0; i<n; i++){
        cin >> a1 >> b1;
        l = sqrt(pow(a-a1,2), pow(b-b1,2));
        point[l].push_back(a1);
        point[l].push_back(b1);
    }

    return 0;
}