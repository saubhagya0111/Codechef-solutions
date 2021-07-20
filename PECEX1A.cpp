#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A[5], n = 5;
        for (int i = 0; i < 5; i++)
        {
            cin >> A[i];
        }
        sort(A, A + n);
        cout << A[2] << endl;
    }
    return 0;
}
