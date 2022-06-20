#include <iostream>

using namespace std;

int main()
{

    int n;

    cout << "Enter the number of rows" << endl;

    cin >> n;

    int odd = 1;
    int even = 4;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 2; j <= even; j += 2)
            {
                cout << j << " ";
            }
            cout << endl;
            even +=4;
        }
        else
        {
            for (int j = 1; j <= odd; j += 2)
            {
                cout << j << " ";
            }
            cout << endl;
            odd +=4;
        }
    }

    return 0;
}

// The pattern is:-

// 1
// 2 4
// 1 3 5
// 2 4 6 8
// 1 3 5 7 9