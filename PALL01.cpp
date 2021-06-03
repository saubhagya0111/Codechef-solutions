#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin >> t;
    while (t--)
    {
        int n, rem, rev = 0;
        cin >> n;
        int temp = n;
        while (n != 0)
        {
            rem = n % 10;
            rev = (rev * 10) + rem;
            n /= 10;
        }
        if (rev == temp)
        {
            cout << "wins\n";
        }
        else if (rev != temp)
        {
            cout << "loses\n";
        }
    }
    return 0;
}
