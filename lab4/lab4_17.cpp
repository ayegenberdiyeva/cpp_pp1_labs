//Help Arman to print image of christmas tree in the screen.

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int r = n, c = (n*2)-1;
    string ar[r][c];

    for (int i =0; i<n; i++){
        for (int j = 0; j<(n*2)-1; j++){
            if (i+j >= n-1 && i+n-1 >= j){
                ar[i][j] = "*";
            } else {
                ar[i][j] = ".";
            }
            cout << ar[i][j];
        }
        cout << endl;
    }

    return 0;
}

/*
00 01 02 03 04 05 06
10 11 12 13 14 15 16
20 21 22 23 24 25 26
30 31 32 33 34 35 36
i+n-1 >= j
i+j >= n-1 && i+j <= (2*n)-2
*/