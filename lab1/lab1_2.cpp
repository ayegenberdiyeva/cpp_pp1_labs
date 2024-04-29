#include <iostream>

using namespace std;

int firstd(int num){
    while (num >= 10)
        num /= 10;

    return num;
}

int lastd(int num){
    return(num % 10);
}

int main(){
    int age, num;
    cin >> age >> num;

    int result = age + firstd(num) + lastd(num);

    cout << result << endl;
    return 0;
}