#include <bits/stdc++.h>
using namespace std;
void count()
{
    string s;
    int c1 = 0, c2 = 0;
    cin >> s;
    for (int i = 0; i <= s.length(); i++)
    {
        if (s[i] == 'a')
        {
            c1++;
        }
        else if (s[i] == 'b')
        {
            c2++;
        }
    }
    int max = c1 < c2 ? c1 : c2;
    cout << max << endl;
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin >> t;
    while (t--)
    {
        count();
    }

    return 0;
}
