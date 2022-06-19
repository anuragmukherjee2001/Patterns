#include <iostream>

using namespace std;

int main()
{

    int n;

    cout << "Enter the number of rows" << endl;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

// The pattern is

// 1
// 21
// 321
// 4321
// 54321