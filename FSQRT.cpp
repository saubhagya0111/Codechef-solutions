#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        float square = sqrt(n);
        cout << round(square) << endl;
    }

    return 0;
}
