//Help Aisultan choose which discipline to drop, so he will have a good GPA. Each row represents one subject with its grades. Pick one subject with the minimal total grades. If two or more subjects’ grades are equal, pick the first one.

#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int min = n*100, min_i = 0;

    int ar[n][m], sum[n];
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            cin >> ar[i][j];
            sum[i] += ar[i][j];
        }
    }

    for (int i = 0; i<n; i++){
        if(sum[i] < min){
            min = sum[i];
            min_i = i+1;
        }
    }

    cout << min_i << endl;

    return 0;
}