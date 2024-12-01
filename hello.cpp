#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//   // cout << "hello world";

//   int a = 10;
//   int b = 1000000;

//   // cout << a << endl
//   //      << b;

//   //////// taking input & typecasting (data type change kora)

//   char c;
//   cin >> c;

//   cout << int(c) << endl;

//   int d = 100;
//   long long int p = (long long int)(d); // jodi akadik worder typer nam hoy tahle aivabe convert kora lage

//   return 0;
// }

////////////  find a specific word from a string & replace it with "#"

int main()
{
  int t;
  cin >> t;

  for (int j = 0; j < t; j++)
  {
    string s;
    cin >> s;
    string x;
    cin >> x;

    int xLength = x.length();

    string result = "";
    for (int i = 0; i < s.length(); i++)
    {
      if (i + xLength - 1 < s.length() && s.substr(i, xLength) == x)
      {
        result += "#";
        i += xLength - 1;
      }
      else
      {
        result += s[i];
      }
    }

    cout << result << endl;
  }
}
