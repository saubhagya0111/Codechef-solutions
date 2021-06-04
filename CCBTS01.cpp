#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.length() == 3)
        {
            if (s[0] != s[1] && s[0] != s[2] && s[1] != s[2])
            {
                cout << "YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
            
        }
    }

    return 0;
}
