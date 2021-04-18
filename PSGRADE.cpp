#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c, a1, b1, c1, t1, s, s1;
    cin >> t;
    while (t > 0)
    {
        --t;
        cin >> a1 >> b1 >> c1 >> s >> a >> b >> c;
        s1 = a + b + c;
        if (a >= a1 && b >= b1 && c >= c1 && s1 >= s)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
