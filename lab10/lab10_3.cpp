#include <iostream>
#include <stack>
#include <cmath>

using namespace std;

bool sqrt(int n){
    int sr = sqrt(n);
    if( n%sr == 0){
        return false;
    }
    return true;
}



int main(){
    stack<char> stack;
    string n;
    cin >> n;

    for (int i = 0; i<n.size(); i++){
        if (stack.empty()){
            stack.push(n[i]);
        } else if (stack.top() == '1' && n[i] == '6'){
            stack.pop();
        } else if (stack.top() == '2' && n[i] == '5'){
            stack.pop();
        } else if (stack.top() == '3' && n[i] == '6'){
            stack.pop();
        } else if (stack.top() == '4' && n[i] == '9'){
            stack.pop();
        } else if (stack.top() == '6' && n[i] == '4'){
            stack.pop();
        } else if (stack.top() == '8' && n[i] == '1'){
            stack.pop();
        } else {
            stack.push(n[i]);
        }
    }

    if(stack.empty()){
        cout << "Stack is empty" << endl;
    } else {
        while (!stack.empty()){
        cout << stack.top();
        stack.pop();
        }
    }

    return 0;
}