#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;

    for (int i = 0; i<s.size(); i++){
        int k = (int) s[i];
        if ((k+n) > 90){
            k = k+n-26;
        } else {
            k += n;
        }

        s[i] = (char) k;
    }

    cout << s << endl;

    return 0;
}