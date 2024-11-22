#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);

    sort(s.begin(), s.end());
    cout << s << endl;

    return 0;
}