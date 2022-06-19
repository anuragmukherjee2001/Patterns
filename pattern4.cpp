#include<iostream>

using namespace std;

int main(){

    int n;

    cout << "Enter the number of rows" << endl;
    
    cin >> n;

    int x = 1;

    for(int i = n; i >= 1; i--){
        for(int j = n; j >= x; j--){
            cout << j << " ";
        }
        cout << endl;
        x++;
    }

    return 0;
}


// The pattern is:-

// 54321
// 5432
// 543
// 54
// 5