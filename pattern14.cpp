#include<iostream>

using namespace std;

int main(){

    int n;

    cout << "Enter the number of rows" << endl;
    
    cin >> n;

    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= (i * 2 - 1); j++){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

// The pattern is:

// 123456789
// 1234567
// 12345
// 123
// 1