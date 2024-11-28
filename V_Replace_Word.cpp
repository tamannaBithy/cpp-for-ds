#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    string result = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (i + 4 < s.length() && s.substr(i, 5) == "EGYPT")
        {
            result += " ";
            i += 4;
        }
        else
        {
            result += s[i];
        }
    }

    cout << result << endl;

    return 0;
}