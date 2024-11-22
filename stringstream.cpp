#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    // ss << s; // streamstringer modde s na diye aivabe o kora jay
    string word;
    int count = 0;
    while (ss >> word)
    {
        cout << word << endl;
        count++;
    }
    cout << count << endl;
    return 0;
}

/// streamstring holo akta sentencer modde sobgula word alada alada vabe access korte parar akta constructor