#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n <= 50 && n >= 1)
    {
        cout << "100\n";
    }
    else if (n >= 51 && n <= 100)
    {
        cout << "50\n";
    }
    else
    {
        cout << "0\n";
    }

    return 0;
}
