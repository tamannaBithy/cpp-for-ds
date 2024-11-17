#include <iostream>
#include <string>
using namespace std;

///////////// array ///////////

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

///////////// string ////////////////

int main()
{
    char s[100];
    int a;
    cin >> a;
    getchar();           /// akta input neyar por jodi enter use kore thaki tbe oi enter fele na di tahle porer input ta print hoy na. oi enter ta fele deyar jonno ai func use kora hoy
    cin.getline(s, 100); /// string input aivabe ney c++ a
    cout << a << endl;
    cout << s << endl;
}