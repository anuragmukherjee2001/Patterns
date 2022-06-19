#include<iostream>

using namespace std;

int main(){

    int n;

    cout << "Enter the number of rows" << endl;
    
    cin >> n;

    int x = n;

    for(int i = 1; i <= n; i++){
        for(int j = n; j >= x; j--){
            cout << j << " ";
        }
        cout << endl;
        x--;
    }

    return 0;

}

// The pattern is:-

// 5
// 54
// 543
// 5432
// 54321