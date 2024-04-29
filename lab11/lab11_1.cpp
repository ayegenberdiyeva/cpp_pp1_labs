#include <iostream>
#include <map>

using namespace std;

int main(){
    string s;
    cin >> s;

    map<string, int> week; //= {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    week["SUN"] = 7;
    week["MON"] = 6;
    week["TUE"] = 5;
    week["WED"] = 4;
    week["THU"] = 3;
    week["FRI"] = 2;
    week["SAT"] = 1;

    cout << week[s] << endl;

    return 0;
}