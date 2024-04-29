#include <iostream>

using namespace std;

float percentage(float n, float m){
    float percentage = m*100/n;
    cout << percentage << endl;

    return 0;
}

int main(){
    float total, girls;
    cin >> total >> girls;

    percentage(total, girls);

    return 0;
}