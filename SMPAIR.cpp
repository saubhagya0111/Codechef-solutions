#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        sort(A, A + n);
        int sum = A[0] + A[1];
        cout << sum << endl;
    }

    return 0;
}
