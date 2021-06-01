#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, o;
    cin >> t;
    while (t > 0)
    {
        --t;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << "\n";
        }
        else if (n > 1)
        {
            cout << (n / 2) + 1 << "\n";
        }

        // cout << i << "\n";
    }
}
