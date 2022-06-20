#include <iostream>

using namespace std;

int main()
{

    int n;

    cout << "Enter the number of rows" << endl;

    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        if (i % 2 == 0)
        {
            for (int j = i; j >= 1; j--)
            {
                cout << j << " ";
            }
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
        }

        cout << endl;
    }

    return 0;
}

// The pattern is:

// 12345
// 4321
// 123
// 21
// 1