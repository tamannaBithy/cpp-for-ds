#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int j = 0; j < t; j++)
    {

        string s;
        cin >> s;

        int result1 = 0;
        int result2 = 0;

        for (int i = 0; i < s.length() / 2; i++)
        {
            result1 = result1 + (s[i] - 48);
        }

        for (int i = s.length() / 2; i < s.length(); i++)
        {
            result2 = result2 + (s[i] - 48);
        }

        if (result1 == result2)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

        cout << endl;
    }

    return 0;
}