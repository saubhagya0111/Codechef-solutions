
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b)
    {
        cout << "Yes" << endl;
    }
    else if (b == c)
    {
        cout << "Yes" << endl;
    }
    else if (a == c)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
