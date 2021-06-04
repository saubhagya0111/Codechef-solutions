#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin >> t;
    while (t--)
    {
        int x1, x2, X1, X2;
        cin >> x1 >> x2 >> X1 >> X2;
        float a, b;
        a = (X1 / x1);
        b = (X2 / x2);
        cout << round(a + b) << endl;
    }
    return 0;
}
