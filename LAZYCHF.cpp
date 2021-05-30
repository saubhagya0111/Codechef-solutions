#include <bits/stdc++.h>
using namespace std;
void minimun(int x, int m, int d)
{
    int m1 = (x * m);
    int m2 = x + d;
    cout << min(m1, m2);
}
int main()
{
    int t;
    int x, d, m;
    cin >> t;
    while (t > 0)
    {
        --t;
        cin >> x >> m >> d;
        minimun(x, m, d);
        cout << endl;
    }
    return 0;
}
