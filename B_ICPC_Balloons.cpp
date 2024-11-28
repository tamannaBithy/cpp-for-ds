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
        string s;
        cin >> s;

        int freq[26] = {0};
        int result = 0;

        for (char c : s)
        {
            int value = c - 'A';

            if (freq[value] == 0)
            {
                result += 2;
            }
            else
            {
                result++;
            }
            freq[value]++;
        }

        cout << result << endl;
    }

    return 0;
}