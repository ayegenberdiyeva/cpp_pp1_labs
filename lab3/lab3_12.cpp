#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, sum;

    cin >> n;
    int a[n];
    
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    cin >> m;
    int b[m];

    for(int i = 0; i<m; i++){
        cin >> b[i];
    }

    sum = n+m;
    int c[sum];

    for (int i = 0; i < n; i++){
        c[i] = a[i];
    }

    for (int i = n, j = 0; i < sum; i++, j++){
        c[i] = b[j];
    }
    
    sort(c, c + sum);

    for ( int i = 0; i<sum; i++){
        cout << c[i] << " ";
    }

    return 0;
}