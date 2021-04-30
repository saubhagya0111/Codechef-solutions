#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, r;
    int m, s;
    cin >> t;
    while (t > 0)
    {
        --t;
        cin >> m >> s;
        r = m / s;
        cout << r << endl;
    }
    return 0;
}
