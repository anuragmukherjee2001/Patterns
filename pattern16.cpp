#include<iostream>

using namespace std;

int main(){

    int n;

    cout << "Enter the number of rows" << endl;
    
    cin >> n;
    int k = 1;
    int l = 1;

    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << k << " ";
            k +=2;
        }
        cout << endl;
        k = l + 2;
        l+=2;
    }

    return 0;
}

// The pattern is:- 

// 13579
// 3579
// 579
// 79
// 9