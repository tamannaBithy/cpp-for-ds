#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    long long sum = pow(x, 0) - 1;
    for (int i = 2; i <= n; i += 2)
    {
        sum += pow(x, i);
    }

    cout << sum << endl;
    return 0;
}