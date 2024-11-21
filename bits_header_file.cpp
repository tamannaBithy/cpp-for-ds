#include <bits/stdc++.h> /// ai header filer moddei sob header file ache alada alada kore onkgula lekhar dorkar hoy na r
using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int *arrA = new int[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arrA[i];
//     }

//     int m;
//     cin >> m;
//     int *arrB = new int[m];

//     for (int i = 0; i < n; i++)
//     {
//         arrB[i] = arrA[i];
//     }

//     for (int i = n; i < m; i++)
//     {
//         cin >> arrB[i];
//     }

//     delete[] arrA;

//     for (int i = 0; i < m; i++)
//     {
//         cout << arrB[i] << " ";
//     }

//     delete[] arrB;
//     return 0;
// }

// int *sort_it(int n)
// {
//     int *a = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     sort(a, a + n, greater<int>()); // descending

//     return a;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int *a = sort_it(n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     delete[] a;
//     return 0;
// }

// int main()
// {
//     char s[100001];

//     while (cin.getline(s, 100001))
//     {
//         string processed = "";

//         // Remove spaces and append characters to `processed`
//         for (int i = 0; s[i] != '\0'; i++)
//         {
//             if (s[i] != ' ')
//             {
//                 processed += s[i];
//             }
//         }

//         sort(processed.begin(), processed.end());

//         cout << processed << endl;
//     }
// }

// class Student
// {
// public:
//     int id;
//     char name[100];
//     char sec;
//     int marks;
// };

// int main()
// {
//     int t;
//     cin >> t;

//     for (int i = 0; i < t; i++)
//     {

//         Student mxStudent;
//         mxStudent.marks = -1;

//         for (int j = 0; j < 3; j++)
//         {
//             Student a;
//             cin >> a.id >> a.name >> a.sec >> a.marks;

//             if (a.marks > mxStudent.marks || (a.marks == mxStudent.marks && a.id < mxStudent.id))
//             {
//                 mxStudent = a;
//             }
//         }

//         cout << mxStudent.id << " " << mxStudent.name << " " << mxStudent.sec << " " << mxStudent.marks << endl;
//     }
//     return 0;
// }

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, s;
        cin >> n >> s;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {

                for (int l = k + 1; l < n; l++)
                {
                    if (a[j] + a[k] + a[l] == s)
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag)
                    break;
            }
            if (flag)
                break;
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}