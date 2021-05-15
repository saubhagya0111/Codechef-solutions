#include <bits/stdc++.h>
using namespace std;
//May'21 Long Challenge Div 3
int main()
{
    int t, x, a, b;
    float m;
    cin >> t;
    while (t > 0)
    {
        --t;
        cin >> x >> a >> b;
        m = (a + ((100 - x) * b));
        m *= 10;
        cout << m << "\n";
    }
    return 0;
}
