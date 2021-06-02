#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int A[t];
    for (int i = 0; i < t; i++)
    {
        cin >> A[i];
    }
    sort(A, A + t);
    for (int i = 0; i < t; i++)
    {
        cout << A[i] << endl;
    }
    return 0;
}
