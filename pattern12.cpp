#include<iostream>

using namespace std;

int main(){

    int n;

    cout << "Enter the number of rows" << endl;
    
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}

// The pattern is:

// 11111
// 2222
// 333
// 44
// 5