#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    int a = n*2, b = (n*4)-1;

    string tri[a][b];

    for (int i = 0; i<a; i++){
        for (int j = 0; j<b; j++){
            if (i+j == a-1){
                tri[i][j] = '*';
            } else if (i == j-a+1){
                tri[i][j] = '*';
            } else if (i == a-1){
                tri[i][j] = '*';
            }else {
                tri[i][j] = ' ';
            }
        }
    }

    for (int i = 0; i<a; i++){
        for (int j = 0; j<b; j++){
            cout << tri[i][j];
        }
        cout << endl;
    }

    return 0;
}

 n = 3
[3][0]
[0][3]
[3][6]

for (int i = 0; i<a; i++){
    for (int j = 0; j<b; j++){
        if (i == 0 && j == n){
            if (i+j-n == n-1)
        }
    }
}

*/
0 0 1 2 3 4 5 6 7 8 9 10
0 - - - - - * - - - - - 
1 - - - - * - * - - - -
2 - - - * * * * * - - -
3 - - * - - - - - * - - 
4 - * - * - - - * - * -
5 * * * * * - * * * * * 