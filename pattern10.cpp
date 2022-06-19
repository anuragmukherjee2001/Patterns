#include<iostream>

using namespace std;

int main(){

    int n;

    cout << "Enter the number of rows" << endl;
    
    cin >> n;

    int x = 1;

  for(int i = n; i >= 1; i--){
        for(int j = 1; j <= x; j++){
            cout << i << " ";
        }

        cout << endl;
        x++;
    }

    return 0;
}

// The pattern is:-

// 5
// 44
// 333
// 2222
// 11111