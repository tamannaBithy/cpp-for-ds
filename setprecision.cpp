#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main()
{
    double a;
    cin >> a;

    /// in c //////////
    // printf("%0.3lf\n", a);

    ///// in c++ /////////////
    //// c++ a format specifier nai tai koto gor porjonto print hbe seita bole deyar jonno <iomanip> (input output manipulation) use korte hoy

    cout << fixed << setprecision(2) << a << endl;
}