#include <iostream>

using namespace std;

void printTotalNumberAndTheMaximumNumberOfChips(int arr[], int n){
    int sum = 0, maxichai = 0;
    for (int i = 0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
        if (maxichai<arr[i]){
            maxichai = arr[i];
        }
    }

    cout << sum << " " << maxichai << endl;
}

int main(){
    int n;
    cin >> n;

    int ami[n];

    printTotalNumberAndTheMaximumNumberOfChips(ami, n);

    return 0;
}