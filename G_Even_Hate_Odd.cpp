#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int j = 0; j < t; j++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        if (n % 2 != 0)
        {
            cout << "-1" << endl;
            continue;
        }

        int countOdd = 0;
        int countEven = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                countEven++;
            }
            else
            {
                countOdd++;
            }
        }

        if (countEven == countOdd)
        {
            cout << "0" << endl;
        }

        else
        {
            cout << abs(countEven - countOdd) / 2 << endl;
        }
    }

    return 0;
}