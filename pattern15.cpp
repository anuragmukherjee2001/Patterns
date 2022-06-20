#include<iostream>

using namespace std;

int main(){

    int n;

    cout << "Enter the number of rows" << endl;
    
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = i; j >= 1; j--){
            cout << j%2 << " ";
        }
        cout << endl;
    }

    return 0;
}

// The pattern is:-

// 1
// 01
// 101
// 0101