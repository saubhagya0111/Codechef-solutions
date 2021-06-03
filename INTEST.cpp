#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int c = 0, n, k;
    ios_base::sync_with_stdio(false);
    cin >> n >> k;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (t % k == 0)
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}
