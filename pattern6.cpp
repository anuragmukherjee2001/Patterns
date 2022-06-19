#include<iostream>

using namespace std;

int main(){

    int n;

    cout << "Enter the number of rows" << endl;
    
    cin >> n;

    int x = n;

    for(int i = 1; i <= n; i++){
        for(int j = x; j <= n; j++){
            cout << j << " ";
        }
        x--;
        cout << endl;
    }

    return 0;
}



// The pattern is:-

// 5
// 45
// 345
// 2345
// 12345