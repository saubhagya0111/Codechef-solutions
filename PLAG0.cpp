#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
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
        int element = *max_element(A, A + n);
        if (element >= 80)
        {
            cout << "BANNED\n";
        }
        else if (element >= 60 && element < 80)
        {
            cout << "PLAGIARISED -275\n";
        }
        else
        {
            cout << "COINCIDENCE\n";
        }
    }
    return 0;
}
