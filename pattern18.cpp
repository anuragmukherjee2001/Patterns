#include<iostream>

using namespace std;

int main(){

    int n;

    cout << "Enter the number of rows" << endl;
    
    cin >> n;
    int k;

    for(int i = n; i >= 1; i--){
        k = i;
        for(int j = 1; j <= n; j++){

            if(k > j){
                cout << n << " ";
            }
        }
        k++;
        cout << endl;
    }

    return 0;
}

// The pattern is:-

// 55555
// 45555
// 34555
// 23455
// 12345