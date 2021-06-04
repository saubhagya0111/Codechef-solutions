#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin >> t;
    while (t--)
    {
        int o = 0, z = 0;
        int A[5];
        for (int i = 0; i < 5; i++)
        {
            cin >> A[i];
            if (A[i] == 1)
            {
                o++;
            }
        }
        if (o == 0)
        {
            cout << "Beginner\n";
        }
        else if (o == 1)
        {
            cout << "Junior Developer\n";
        }
        else if (o == 2)
        {
            cout << "Middle Developer\n";
        }
        else if (o == 3)
        {
            cout << "Senior Developer\n";
        }
        else if (o == 4)
        {
            cout << "Hacker\n";
        }
        else if (o == 5)
        {
            cout << "Jeff Dean\n";
        }
    }
    return 0;
}
