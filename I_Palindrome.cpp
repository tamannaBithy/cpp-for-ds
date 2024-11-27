#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int flag = 1;
    int i = 0;
    int j = s.length() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}