#include <bits/stdc++.h>
using namespace std;

/// streamstring holo akta sentencer modde sobgula word alada alada vabe access korte parar akta constructor

// int main()
// {
//     string s;
//     getline(cin, s);
//     stringstream ss(s);
//     // ss << s; // streamstringer modde s na diye aivabe o kora jay
//     string word;
//     int count = 0;
//     while (ss >> word)
//     {
//         cout << word << endl;
//         count++;
//     }
//     cout << count << endl;
//     return 0;
// }

//////// recursive way te ba ulta side theke word gula print korar jonno

// void print_recursive(stringstream &ss)
// {
//     string word;
//     if (ss >> word)
//     {
//         print_recursive(ss);
//         cout << word << endl;
//     }
// }

// int main()
// {
//     string s;
//     getline(cin, s);
//     stringstream ss(s);
//     print_recursive(ss);
//     return 0;
// }

////////////////////// counting how many time "jhon" appeared in a string

int main()
{
    string s;
    getline(cin, s);
    string expected;
    cin >> expected;

    stringstream ss(s);

    string word;
    int count = 0;

    while (ss >> word)
    {

        if (word == expected)
        {
            count++;
        }
    }

    cout << count << endl;
}