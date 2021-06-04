#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int t;
    ios_base::sync_with_stdio(false);
    // cin >> t;
    int n;
    cin >> n;
    string s = to_string(n);
    if (s.length() == 1)
    {
        cout << "1\n";
    }
    else if (s.length() == 2)
    {
        cout << "2\n";
    }
    else if (s.length() == 3)
    {
        cout << "3\n";
    }
    else if (s.length() > 3)
    {
        cout << "More than 3 digits\n";
    }
    return 0;
}
