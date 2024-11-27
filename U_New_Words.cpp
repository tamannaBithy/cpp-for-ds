#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::toupper);

    map<char, int> freq;

    for (char c : s)
    {
        freq[c]++;
    }

    int count = min({freq['E'], freq['G'], freq['Y'], freq['P'], freq['T']});
    cout << count << endl;

    return 0;
}