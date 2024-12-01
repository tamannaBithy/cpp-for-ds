#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student a, Student b)
{
    if (a.marks == b.marks)
    {
        return a.roll < b.roll;
    }
    else
    {
        return a.marks > b.marks;
    }
}

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}

/////// swaping based on section

// class Student
// {
// public:
//   string name;
//   int cls;
//   char sec;
//   int id;
// };

// int main()
// {
//   int n;
//   cin >> n;
//   Student a[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> a[i].name >> a[i].cls >> a[i].sec >> a[i].id;
//   }

//   int i = 0;
//   int j = n - 1;
//   while (i < j)
//   {
//     swap(a[i].sec, a[j].sec);
//     i++;
//     j--;
//   }

//   for (int i = 0; i < n; i++)
//   {

//     cout << a[i].name << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << endl;
//   }

//   return 0;
// }