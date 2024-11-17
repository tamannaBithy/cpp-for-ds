#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a, b;

    ////// in c ////////
    // while (scanf("%d %d", &a, &b) != EOF)
    // {
    //     printf("%d %d\n", a, b);
    // }

    ////////// in c++ //////
    while (cin >> a >> b) /// c++ a eof likhte hoy na cin function automatic buje ney
    {
        cout << a << " " << b << endl;
    }
}

/// eof holo end of file mane ami jotokkhon input dite thakbo totokkhn se kaj korbe. input deya ses hole loop o ses.