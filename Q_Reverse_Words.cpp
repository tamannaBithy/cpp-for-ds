#include <bits/stdc++.h>
using namespace std;

void print_recursive(string word)
{
    for (int i = word.length() - 1; i >= 0; i--)
    {
        cout << word[i];
    }
}

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    bool firstWord = true;
    while (ss >> word)
    {
        if (!firstWord)
        {
            cout << " ";
        }
        print_recursive(word);
        firstWord = false;
    }
    return 0;
}