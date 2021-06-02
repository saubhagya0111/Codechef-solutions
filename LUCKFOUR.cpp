#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        string l = to_string(n);
        for (int i = 0; i < l.length(); i++)
        {
            if (l[i] == '4')
            {
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
