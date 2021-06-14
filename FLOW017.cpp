#include <iostream>
using namespace std;
int maxima()
{
    int a, b, c;
    int x, y;
    cin >> a >> b >> c;
    int m = a > b ? a > c ? a : c : b > c ? b
                                          : c;
    if (m == a)
    {
        return max(b, c);
    }
    else if (m==b)
    {
        return max(a, c);
    }
    else if (m==c)
    {
        return max(a, b);
    }
}
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin >> t;
    while (t--)
    {
        cout << maxima() << "\n";
    }
    return 0;
}
