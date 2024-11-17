#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

///////////// min, max //////////////

// int main()
// {
//     int a, b, c, d;
//     cin >> a >> b >> c >> d;

//     ////////// only 2 ta numberer modde hoile

//     // int mn = min(a, b);
//     // int mx = max(a, b);

//     /////////// 2 tar besi number hoile {} bracket use korte hoy

//     int mn = min({a, b, c, d});
//     int mx = max({a, b, c, d});

//     cout << mn << " " << mx << endl;
// }

/////////////// swap //////////

int main()
{
    int a, b;
    cin >> a >> b;
    swap(a, b); //// swap er jonno built-in <utility> function use korte hoy
    cout << a << " " << b << endl;
}