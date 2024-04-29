#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n, num;
    string name;
    cin >> n;

    vector<int> grades;
    vector<string> names;

    for (int i = 0; i<n; i++){
        cin >> name >> num;
        names.push_back(name);
        grades.push_back(num);
    }

    sort(names.begin(), names.end());
    sort(grades.begin(), grades.end());

    for (int i = 0; i<n; i++){
        cout << names[i] << " " << grades[i] << endl;
    }
    
    return 0;
}