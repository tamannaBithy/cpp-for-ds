#include <bits/stdc++.h> /// ai header filer moddei sob header file ache alada alada kore onkgula lekhar dorkar hoy na r
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *arrA = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arrA[i];
    }

    int m;
    cin >> m;
    int *arrB = new int[m];

    for (int i = 0; i < n; i++)
    {
        arrB[i] = arrA[i];
    }

    for (int i = n; i < m; i++)
    {
        cin >> arrB[i];
    }

    delete[] arrA;

    for (int i = 0; i < m; i++)
    {
        cout << arrB[i] << " ";
    }

    delete[] arrB;
    return 0;
}
