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
        char s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        int freq[26] = {0};

        for (int i = 0; i < n; i++)
        {
            int value = s[i] - 'A';

            if (freq[value] == 0)
            {
                freq[value] += 2;
            }
            else
            {
                freq[value]++;
            }
        }

        int result = 0;

        for (int i = 0; i < 26; i++)
        {
            result += freq[i];
        }

        cout << result << endl;
    }

    return 0;
}